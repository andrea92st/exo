/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 20:01:22 by fio               #+#    #+#             */
/*   Updated: 2025/03/19 00:19:07 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int c)
{
	int		counter;

	counter = 0;
	if (c == 0)
		counter++;
	if (c < 0)
	{
		counter++;
		c = -c;
	}
	while (c > 0)
	{
		counter++;
		c = c / 10;
	}
	return (counter);
}

static char	*check_0(void)
{
	char	*dest;	

	dest = (char *)malloc(2 * sizeof(char));
	if (dest == NULL)
		return (NULL);
	dest[0] = '0';
	dest[1] = '\0';
	return (dest);
}

static char	*check_int_min(void)
{
	char	*dest;

	dest = (char *)malloc(12 * sizeof(char));
	if (dest == NULL)
		return (NULL);
	dest[0] = '-';
	dest[1] = '2';
	dest[2] = '1';
	dest[3] = '4';
	dest[4] = '7';
	dest[5] = '4';
	dest[6] = '8';
	dest[7] = '3';
	dest[8] = '6';
	dest[9] = '4';
	dest[10] = '8';
	dest[11] = '\0';
	return (dest);
}

char	*ft_itoa(int n)
{
	int		i;
	int		calc;
	char	*dest;

	if (n == -2147483648)
		return (check_int_min());
	if (n == 0)
		return (check_0());
	calc = count(n);
	i = calc - 1;
	dest = (char *)malloc(sizeof(char) * (calc + 1));
	if (dest == NULL)
		return (NULL);
	if (n < 0)
	{
		dest[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		dest[i--] = (n % 10) + '0';
		n = n / 10;
	}
	dest[calc] = '\0';
	return (dest);
}
