/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchabala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:21:05 by kchabala          #+#    #+#             */
/*   Updated: 2018/09/04 11:21:09 by kchabala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		**new;
	t_list		**test;

	if (!alst)
		return ;
	new = alst;
	while (*new)
	{
		test = new;
		del((*new)->content, (*new)->content_size);
		free(*test);
		*new = (*new)->next;
	}
	ft_memdel((void **)alst);
}
