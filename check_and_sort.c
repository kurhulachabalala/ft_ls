/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchabala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 11:50:02 by kchabala          #+#    #+#             */
/*   Updated: 2018/08/31 11:50:06 by kchabala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftlist.h"

void	reverse_sort(t_directory **begin)
{
	t_directory *cpy;
	t_directory *next;
	t_directory *bfr;

	bfr = *begin;
	cpy = bfr->next;
	bfr->next = NULL;
	while (cpy)
	{
		next = cpy->next;
		cpy->next = bfr;
		bfr = cpy;
		cpy = next;
	}
	*begin = bfr;
}

int		check(t_command *list, char c)
{
	while (list)
	{
		if (list->letter == c)
			return (1);
		list = list->next;
	}
	return (0);
}
