/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-ben <moel-ben@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 01:13:57 by moel-ben          #+#    #+#             */
/*   Updated: 2026/10/18 17:52:45 by moel-ben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int check_overflow(long result, int digit, int sign)
{
	if (sign == 1 && result > (INT_MAX - digit) / 10)
		return (1);
	if (sign == -1 && result > (LONG_MAX - digit) / 10)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (check_overflow(result, str[i] - '0', sign))
			return (0);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}
