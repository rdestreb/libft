/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:43:25 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/06 10:03:07 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*p_dest;
	const char	*p_src;

	i = -1;
	p_dest = (char *)dest;
	p_src = (char *)src;
	while (++i < n)
		p_dest[i] = p_src[i];
	return (p_dest);
}
