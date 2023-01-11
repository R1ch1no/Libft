/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:45:10 by rkurnava          #+#    #+#             */
/*   Updated: 2022/10/21 18:18:12 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*addlst;

	if (!lst || !f || !del)
		return (NULL);
	newlst = ft_lstnew(f(lst->content));
	lst = lst ->next;
	while (lst)
	{
		addlst = ft_lstnew(f(lst->content));
		if (!newlst)
		{
			ft_lstclear((t_list **)newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, addlst);
		lst = lst -> next;
	}
	return (newlst);
}
