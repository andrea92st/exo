/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fio <fio@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 19:38:12 by fio               #+#    #+#             */
/*   Updated: 2025/03/21 20:02:15 by fio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_obj;

	new = NULL;
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (lst)
	{
		new_obj = ft_lstnew(f(lst->content));
		if (new_obj == NULL)
		{
			ft_lstclear(&new, *del);
			if (lst->content != NULL)
				del(lst->content);
			return (NULL);
		}
		ft_lstadd_back(&new, new_obj);
		lst = lst->next;
	}
	return (new);
}
//zarma pb de cc francinette