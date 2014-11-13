/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 12:53:22 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/12 20:42:17 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wd_cnt(char const *s, char c)
{
	int	wd;
	int	i;

	i = 0;
	wd = 0;
	if (s[0] != c)
		wd++;
	while (s[++i])
	{
		if (s[i] != c && s[i - 1] == c)
			wd++;
	}
	return (wd);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		ind;
	char	*tmp;
	char	**tab;

	i = -1;
	ind = -1;
	if (!s || !(tab = (char **)ft_memalloc(sizeof(char*) * (wd_cnt(s, c) + 1))))
		return (NULL);
	while (s[++i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			j = 0;
			while (s[i + j] && s[i + j] != c)
				j++;
			tmp = ft_strsub(s, i, j);
			tab[++ind] = tmp;
			i += j - 1;
		}
	}
	return (tab);
}
