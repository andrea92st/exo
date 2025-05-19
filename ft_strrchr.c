/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:05:11 by fio               #+#    #+#             */
/*   Updated: 2025/03/18 22:26:00 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	len;
	char			c2;

	c2 = (char) c;
	len = ft_strlen(s);
	while (len)
	{
		if (s[len] == c2)
			return ((char *) &s[len]);
		len--;
	}
	if (s[len] == c2)
		return ((char *) &s[len]);
	return (NULL);
}
