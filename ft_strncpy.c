/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 08:52:56 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/13 11:40:51 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	int		flag;

	i = -1;
	flag = 0;
	while (++i < n)
	{
		if (!flag && src[i])
			dest[i] = src[i];
		else
		{
			dest[i] = 0;
			flag++;
		}
	}
	return (dest);
}
