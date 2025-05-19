/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:36:43 by fio               #+#    #+#             */
/*   Updated: 2025/03/18 23:44:21 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str_1;
	unsigned char	*str_2;
	size_t			i;

	str_1 = (unsigned char *)s1;
	str_2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str_1[i] != str_2[i])
			return (str_1[i] - str_2[i]);
		i++;
	}
	return (0);
}
