/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 13:46:44 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/26 17:22:33 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	text_copy(int const fd, char **text)
{
	char	stock[BUFF_SIZE + 1];
	char	*tmp;
	int		ret;

	tmp = NULL;
	ret = -2;
	while ((!ft_strchr(*text, '\n')))
	{
		if ((ret = read(fd, stock, BUFF_SIZE)) <= 0)
			return (ret);
		tmp = *text;
		stock[ret] = 0;
		if (!(*text = ft_strjoin(*text, stock)))
			return (-1);
		ft_strdel(&tmp);
		if (ret < BUFF_SIZE)
			return (ret);
	}
	return (ret);
}

static char	*get_line(char *offset, char **line)
{
	char	*tmp;
	char	*del;

	del = offset;
	if (offset && (tmp = ft_strchr(offset, '\n')))
	{
		*line = ft_strsub(offset, 0, ft_strlen(offset) - ft_strlen(tmp));
		offset = ft_strdup(tmp + 1);
		ft_strdel(&del);
	}
	else
	{
		*line = ft_strdup(offset);
		ft_strclr(offset);
	}
	return (offset);
}

int			get_next_line(int const fd, char **line)
{
	static char	*offset = NULL;
	int			ret;

	if (!(line))
		return (-1);
	if (!offset)
		offset = ft_strnew(0);
	if ((ret = text_copy(fd, &offset)) == -1)
		return (-1);
	offset = get_line(offset, line);
	if ((!ret && !ft_strlen(offset) && !ft_strlen(*line)))
		return (0);
	else
		return (1);
}
