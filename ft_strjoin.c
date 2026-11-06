/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strjoin.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: moel-ben <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/18 11:00:09 by moel-ben         #+#    #+#              */
/*   Updated: 2026/11/06 13:12:05 by moel-ben        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	char	*p;

	if (!s1 && s2)
		return (ft_strdup(s2));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && !s2)
		return (ft_strdup(""));
	s1_len = ft_len(s1);
	s2_len = ft_len(s2);
	p = malloc(s1_len + s2_len + 1);
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, s1_len + s2_len + 1);
	ft_strlcat(p, s2, s1_len + s2_len + 1);
	return (p);
}
