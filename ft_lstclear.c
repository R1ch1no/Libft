/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:07:54 by rkurnava          #+#    #+#             */
/*   Updated: 2022/10/21 15:39:15 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*nxt;

	node = *lst;
	if (lst)
	{
		while (node != NULL)
		{
			nxt = node -> next;
			ft_lstdelone(node, del);
			node = nxt;
		}
		*lst = NULL;
	}
}
