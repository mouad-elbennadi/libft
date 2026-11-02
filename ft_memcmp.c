/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcmp.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: moel-ben <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 23:48:03 by moel-ben         #+#    #+#              */
/*   Updated: 2026/10/18 11:08:33 by moel-ben        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p;
	const unsigned char	*f;

	if (n == 0)
		return (0);
	p = (const unsigned char *) s1;
	f = (const unsigned char *) s2;
	i = 0;
	while (i < n && p[i] == f[i])
		i++;
	if (i == n)
		return (0);
	return (p[i] - f[i]);
}
