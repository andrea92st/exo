/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 23:08:46 by fio               #+#    #+#             */
/*   Updated: 2025/03/18 21:59:42 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len;
	int		len2;
	char	*dest;

	len = ft_strlen(s1);
	len2 = ft_strlen(s2);
	dest = (char *)malloc(sizeof (char) * (len + len2 + 1));
	if (dest == (NULL))
		return (NULL);
	i = 0;
	while (i <= len)
	{
		dest[i] = s1[i];
		i++;
	}
	i = 0;
	while (i <= len2)
	{
		dest[i + len] = s2[i];
		i++;
	}
	dest[len + len2 + 1] = '\0';
	return (dest);
}
