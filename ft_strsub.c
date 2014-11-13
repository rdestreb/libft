/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 14:03:39 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/13 19:40:04 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i;

	if (!s)
		return (NULL);
	if ((new_s = ft_strnew(len)) != NULL)
	{
		i = -1;
		while (++i < len && s[i + start])
			new_s[i] = s[i + start];
	}
	return (new_s);
}
