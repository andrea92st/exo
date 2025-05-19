/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:39:33 by fio               #+#    #+#             */
/*   Updated: 2025/03/18 22:13:25 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	j;
	int		ij;
	int		i;
	char	*dest;

	j = ft_strlen(s);
	dest = (char *) malloc (sizeof(char) * (j + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	ij = j;
	while (i < ij)
	{
		dest[i] = (*f)(i, s[i]);
		i++;
	}
	dest[i] = 0;
	return (dest);
}
