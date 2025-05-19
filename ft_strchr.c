/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:22:13 by fio               #+#    #+#             */
/*   Updated: 2025/03/18 21:53:27 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			c2;

	c2 = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == c2)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == c2)
		return ((char *) &s[i]);
	return (NULL);
}
