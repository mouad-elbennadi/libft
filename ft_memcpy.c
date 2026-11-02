/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: moel-ben <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/14 14:21:47 by moel-ben         #+#    #+#              */
/*   Updated: 2026/10/18 11:08:27 by moel-ben        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*f;
	unsigned char	*g;

	f = (unsigned char *) dest;
	g = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		f[i] = g[i];
		i++;
	}
	return(dest);
}

