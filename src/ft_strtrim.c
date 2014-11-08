/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:31:07 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/08 18:10:09 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new_s;
	int		i;
	int		start;
	int		end;

	i = 0;
	start = 0;
	end = ft_strlen(s) - 1;
	while (ft_isblank(s[start]))
		start++;
	while (ft_isblank(s[end]))
		end--;
	new_s = ft_strnew(end - start + 1);
	while (start <= end)
		new_s[i++] = s[start++];
	return (new_s);
}
