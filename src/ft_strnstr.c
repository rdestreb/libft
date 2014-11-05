/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:03:26 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/05 16:24:35 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *tosearch, const char *tofind, size_t n)
{
	size_t	i;
	size_t	j;

	i = -1;
	if (!(tofind[0]))
		return ((char*)tosearch);
	while (tosearch[++i] && i < n)
	{
		if (tosearch[i] == tofind[j])
		{
			j = 0;
			while (tosearch[i + j] == tofind[j] && tosearch[i + j]
					&& tofind[j])
			{
				j++;
				if (!(tofind[j]))
					return ((char*)tosearch + i);
			}
		}
	}
	return (NULL);
}
