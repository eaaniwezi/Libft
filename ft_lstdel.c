/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarrie <tkarrie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:08:43 by tkarrie           #+#    #+#             */
/*   Updated: 2021/10/23 17:08:48 by tkarrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (alst && *alst && del)
	{
		if ((*alst)->next)
			ft_lstdel(&(*alst)->next, del);
		ft_lstdelone(&(*alst), del);
	}
}
