/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:58:41 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/05 09:04:28 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char		*p_dest;
	const char	*p_src;

	i = -1;
	p_dest = dest;
	p_src = src;
	while (++i < n && p_src[i] != c)
		p_dest[i] = p_src[i];
	return (p_dest);
}
