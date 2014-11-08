/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:29:14 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/08 13:17:32 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*new_s;
	unsigned int	i;

	new_s = ft_strnew(ft_strlen(s));
	//ft_striter(new_s, (void *)f(*s));
	i = -1;
	while (s[++i])
		new_s[i] = f(s[i]);
	return (new_s);
}
