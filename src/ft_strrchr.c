/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:24:20 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/05 13:28:14 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i])
	{
		if (s[ft_strlen(s) - i] == c)
			return ((char*)s + (ft_strlen(s) - i));
	}
	return (NULL);
}
