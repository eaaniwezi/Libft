/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarrie <tkarrie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:38:20 by tkarrie           #+#    #+#             */
/*   Updated: 2021/10/23 17:41:54 by tkarrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*begin;
	t_list	*work;

	if (lst != NULL && f != NULL)
	{
		begin = ft_lstnew(f(lst->content));
		work = begin;
		while (lst->next)
		{
			lst = lst->next;
			work->next = ft_lstnew(ft_strdup(f(lst->content)));
			if (work -> next == NULL)
			{
				ft_lstclear(&begin, del);
				return (NULL);
			}
			work = work->next;
		}
		return (begin);
	}
	return (NULL);
}
