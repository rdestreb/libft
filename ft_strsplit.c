/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 12:53:22 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/10 17:35:10 by rdestreb         ###   ########.fr       */
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
	int	i;
	int	j;
	int	ind;
	char	*tmp;
	char	**tab;

	i = -1;
	ind = -1;
	if (!(tab = (char **)malloc(sizeof(char) * wd_cnt(s, c) + 1)))
		return (NULL);
	while (s[++i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			j = 0;
			while (s[i + j] && s[i + j] != c)
				j++;
			tmp = ft_strnew(j);
			while (j > 0)
			{
				   tmp[j - 1] = s[i + j - 1];
				   j--;
			}
//			ft_putstr(tmp);
//			ft_putchar('\n');
			tab[++ind] = tmp;
			ft_strdel(&tmp);
			i += j;
		}
//		ft_putnbr(i);
//		ft_putchar('\n');
	}
	tab[ind + 1] = 0;
	return (tab);
}
