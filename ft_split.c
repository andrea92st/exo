/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 23:40:39 by fio               #+#    #+#             */
/*   Updated: 2025/03/19 00:18:14 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_secure(char **tab, size_t index, size_t len)
{
	size_t	i;

	i = 0;
	tab[index] = (char *)malloc(sizeof(char) * (len + 1));
	if (tab[index] == NULL)
	{
		while (i < index)
		{
			free (tab[i]);
			i++;
		}
		free (tab);
		return (1);
	}
	return (0);
}

static int	mallocman(char **tab, const char *s, char c)
{
	size_t	len;
	size_t	i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			len++;
			s++;
		}
		if (len > 0)
		{
			if (ft_secure(tab, i, len) == 1)
				return (1);
			ft_strlcpy(tab[i], s - len, len + 1);
		}
		i++;
	}
	return (0);
}

static int	ft_count_words(const char *s, char c)
{
	size_t	i;
	int		res;
	int		isword;

	i = 0;
	res = 0;
	while (s[i])
	{
		isword = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			if (isword == 0)
			{
				res++;
				isword = 1;
			}
			i++;
		}
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	words;

	if (s == NULL)
		return (NULL);
	words = ft_count_words(s, c);
	tab = (char **) malloc (sizeof(char *) * (words + 1));
	if (tab == NULL)
		return (NULL);
	tab[words] = NULL;
	if (mallocman(tab, s, c) == 1)
		return (NULL);
	return (tab);
}
