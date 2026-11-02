/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-ben <moel-ben@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 11:00:09 by moel-ben          #+#    #+#             */
/*   Updated: 2026/10/18 13:15:25 by moel-ben         ###   ########.fr       */
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
	int		i;
	int		j;

	s1_len = ft_len(s1);
	s2_len = ft_len(s2);
	p = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!p)
		return (NULL);
	i = 0;
	j = 0;
	while (i < s1_len)
	{
		p[i] = s1[i];
		i++;
	}
	while (j < s2_len)
	{
		p[i + j] = s2[j];
		j++;
	}
	p[s1_len + s2_len] = '\0';
	return (p);
}
