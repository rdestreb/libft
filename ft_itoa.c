/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 18:28:24 by rdestreb          #+#    #+#             */
/*   Updated: 2014/12/10 09:26:59 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nblen(int n)
{
	long int	mult;
	long int	len;

	len = 1;
	mult = 10;
	while (n / mult != 0)
	{
		mult *= 10;
		len++;
	}
	if (n < 0)
		len++;
	return (len);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = nblen(n);
	str = ft_strnew(len);
	if (n < 0)
	{
		while (len > 0)
		{
			str[--len] = (n % 10) * -1 + '0';
			n /= 10;
		}
		str[0] = '-';
	}
	else
	{
		while (len > 0)
		{
			str[--len] = n % 10 + '0';
			n /= 10;
		}
	}
	return (str);
}
