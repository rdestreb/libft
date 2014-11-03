/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:07:20 by rdestreb          #+#    #+#             */
/*   Updated: 2014/11/03 15:14:00 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int n, size_t len)
{
	int	i;

	i = -1;
	while (i++ < len)
		s[i] = n;
	return (*s);
}
