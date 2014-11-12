/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 14:03:39 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/12 18:21:07 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_s;

	if (!s)
		return (NULL);
	new_s = ft_strnew(ft_strlen(s));
	ft_strncpy(new_s, &s[start], len);
	return (new_s);
}
