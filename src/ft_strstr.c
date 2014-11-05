/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:41:10 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/05 14:54:05 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *tosearch, const char *tofind)
{
	int	i;
	int	j;

	i = -1;
	if (!(tofind[0]))
		return ((char*)tosearch);
	while (tosearch[++i])
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
