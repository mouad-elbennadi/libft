/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: moel-ben <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/17 16:41:45 by moel-ben         #+#    #+#              */
/*   Updated: 2026/11/05 15:57:41 by moel-ben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		i;

	p = malloc(sizeof(char) * (len(s1) + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (i < len(s1))
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
