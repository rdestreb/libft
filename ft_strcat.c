/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 09:21:41 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/05 09:53:32 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	len;

	i = -1;
	len = ft_strlen(dest);
	while (src[++i])
		dest[len + i] = src[i];
	dest[len + i] = 0;
	return (dest);
}
