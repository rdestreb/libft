/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:49:01 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/07 13:51:56 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 1;
	if (s1[i] == 0 && s2[i] == 0)
		return (1);
	else
	{
		while (s1 && s2 && i < n)
		{
			if (s1[i] == s2[i])
				i++;
			else
				return (0);
		}
		if (i == n)
			return (1);
		return (0);
	}
}
