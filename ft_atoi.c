/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 00:35:49 by fio               #+#    #+#             */
/*   Updated: 2025/03/19 00:31:16 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whitespace(char c)
{
	if ((c == ' ') || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

static int	is_symbol(char c)
{
	if ((c == '+') || (c == '-'))
		return (1);
	return (0);
}

static int	is_digit(char c)
{
	if ((c <= '9') && (c >= '0'))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		res;
	int		pos;

	i = 0;
	res = 0;
	pos = 1;
	while (is_whitespace(str[i]))
		i++;
	if (is_symbol(str[i]))
	{
		if (str[i] == '-')
			pos = -pos;
		i++;
	}
	while (is_digit(str[i]))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * pos);
}
