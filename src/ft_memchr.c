/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:38:22 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/06 17:25:21 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		*p_s;
	unsigned char	p_c;
	size_t			i;

	p_s = (char *)s;
	p_c = (unsigned char)c;
	i = -1;
	while (++i < n)
	{
		if (p_s[i] == p_c)
			return (p_s + i);
	}
	return (NULL);
}
