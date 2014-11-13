/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:58:41 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/13 10:41:40 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char		*p_dest;
	const char	*p_src;

	i = 0;
	p_dest = (char *)dest;
	p_src = (char *)src;
	while (i < n)
	{
		*p_dest = p_src[i];
		p_dest++;
		if (p_src[i++] == c)
			return (p_dest);
	}
	return (NULL);
}
