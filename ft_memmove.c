/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 00:49:20 by fio               #+#    #+#             */
/*   Updated: 2025/03/19 00:11:46 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*contdest;
	char	*contsrc;

	if (dst == NULL && src == NULL)
		return (NULL);
	contdest = (char *) dst;
	contsrc = (char *) src;
	if (contsrc < contdest)
	{
		while (len > 0)
		{
			contdest[len - 1] = contsrc[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(contdest, contsrc, len);
	return (dst);
}
