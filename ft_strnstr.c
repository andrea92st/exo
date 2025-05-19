/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 23:40:51 by fio               #+#    #+#             */
/*   Updated: 2025/03/18 22:22:50 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	malen;

	i = 0;
	if (*s2 == '\0')
		return ((char *) s1);
	malen = ft_strlen(s2);
	if (s1[i] == '\0' || len < malen)
		return (NULL);
	while (s1[i] && i < len)
	{
		j = 0;
		while (s1[i + j] == s2[j] && (i + j) < len)
		{
			if (s2[j + 1] == '\0')
				return ((char *) s1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
