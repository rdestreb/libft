/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 08:51:45 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/10 20:30:42 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	if (!(dup = (char*)ft_memalloc((strlen(s) + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (s[++i])
		dup[i] = s[i];
	return (dup);
}
