/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-ben <moel-ben@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 16:38:20 by moel-ben          #+#    #+#             */
/*   Updated: 2026/10/18 17:51:52 by moel-ben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>
#include<stddef.h>
#include<stdio.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	const unsigned char *s;
	unsigned char *d;
	size_t	i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;

	if(!dest || !src)
		return(dest);
	if(d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while(n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	return (d);
}

int main()
{
	char c[]= "hello";
	memmove(c+2, c, 3);
	printf("%s", c);
}