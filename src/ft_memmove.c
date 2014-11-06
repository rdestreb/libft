/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:29:44 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/06 15:35:29 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*p_dst;
	const char	*p_src;
	size_t		i;

	p_dst = (char *)dst;
	p_src = (const char *)src;
	i = -1;
	if (p_dst < p_src)
	{
		while (++i < n)
			p_dst[i] = p_src[i];
	}
	else
	{
		while (n-- > 0)
			p_dst[n] = p_src[n];
	}
	return (dst);
}
