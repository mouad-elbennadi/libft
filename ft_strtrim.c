/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: moel-ben <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/18 12:32:11 by moel-ben         #+#    #+#              */
/*   Updated: 2026/10/23 21:29:51 by moel-ben        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == c)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*p;
	int		i;

	i = 0;
	start = 0;
	end = 0;
	while (s1[start] && check(set, s1[start]))
		start++;
	while (s1[end])
		end++;
	while (start < end && check(set, s1[end - 1]))
		end--;
	p = malloc(end - start + 1);
	if (!p)
		return (NULL);
	while (start < end)
	{
		p[i] = s1[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}
