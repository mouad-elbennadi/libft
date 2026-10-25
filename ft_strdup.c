/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: moel-ben <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/17 16:41:45 by moel-ben         #+#    #+#              */
/*   Updated: 2026/10/18 11:08:00 by moel-ben        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*p;
	int		i;

	p = malloc(sizeof(const char) * (len(s) + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (i < len(s) + 1)
	{
		p[i] = s[i];
		i++;
	}
	return (p);
}
