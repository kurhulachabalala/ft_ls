/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchabala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:20:16 by kchabala          #+#    #+#             */
/*   Updated: 2018/09/04 11:20:24 by kchabala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list	*tmp;

	if (!begin_list)
		return (NULL);
	tmp = begin_list;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
