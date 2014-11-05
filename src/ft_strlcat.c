/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 10:34:55 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/05 12:04:52 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstlen)
{
	size_t	i;

	i = -1;
	if (ft_strlen(dst) > dstlen)
	{
		while (src[++i])
			dst[dstlen + i] = src[i];
		dst[dstlen + i] = 0;
	}
	else
		ft_strcat(dst, src);
	return (ft_strlen(dst));
}
