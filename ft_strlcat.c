/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:07:05 by fio               #+#    #+#             */
/*   Updated: 2025/03/21 19:26:14 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	start;
	unsigned int	end;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	start = 0;
	end = 0;
	if (size <= len_dest)
		return (size + len_src);
	while (dest[end])
		end++;
	while (start < (size - len_dest - 1) && src[start])
	{
		dest[end] = src[start];
		end++;
		start++;
	}
	dest[end] = '\0';
	return (len_dest + len_src);
}
