/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 09:33:38 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/13 13:34:48 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	i;
	int	j;
	int	n;

	i = -1;
	j = -1;
	n = 0;
	while (ft_isspace(s[++i]) || (s[i] == '+' && ft_isdigit(s[i + 1])) ||
			(s[i] == '-' && ft_isdigit(s[i + 1])) || ft_isdigit(s[i]))
	{
		if (ft_isdigit(s[i]))
		{
			while (ft_isdigit(s[i + ++j]))
			{
				n *= 10;
				n += s[i + j] - '0';
			}
			if (s[i - 1] == '-')
				return (-n);
			return (n);
		}
	}
	return (n);
}
