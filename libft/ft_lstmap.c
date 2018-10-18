/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchabala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:31:05 by kchabala          #+#    #+#             */
/*   Updated: 2018/09/04 11:31:09 by kchabala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*prev;
	t_list	*begin;

	if (!(new = ft_lstnew((f(lst))->content, (f(lst))->content_size)))
		return (NULL);
	new = f(lst);
	lst = lst->next;
	prev = new;
	begin = NULL;
	while (lst)
	{
		if (!(new = ft_lstnew(f((lst))->content, f((lst))->content_size)))
			return (NULL);
		new = f(lst);
		prev->next = new;
		if (!begin)
			begin = prev;
		prev = new;
		lst = lst->next;
	}
	new->next = NULL;
	return (begin);
}
