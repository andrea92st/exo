/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 18:02:05 by fio               #+#    #+#             */
/*   Updated: 2025/03/21 19:22:51 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*index;

	if (lst && del)
	{
		while (*lst)
		{
			index = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = index;
		}
		*lst = NULL;
	}
}
