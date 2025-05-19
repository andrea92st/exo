/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 22:29:14 by fio               #+#    #+#             */
/*   Updated: 2025/03/19 00:17:24 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*malloc_dest(size_t i, size_t j, const char *src)
{
	size_t	index;
	size_t	len;
	char	*dest;

	len = (j - i) + 1;
	dest = (char *) malloc (sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	index = 0;
	while (i <= j)
	{
		dest[index] = src[i];
		i++;
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

static int	skipset(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	if (s1[0] == '\0')
		return (ft_strdup(""));
	while (skipset(set, s1[i]))
		i++;
	if (i > j)
		return (ft_strdup(""));
	while (skipset(set, s1[j]))
		j--;
	return (malloc_dest(i, j, s1));
}
