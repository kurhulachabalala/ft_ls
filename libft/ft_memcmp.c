/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchabala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:35:02 by kchabala          #+#    #+#             */
/*   Updated: 2018/09/04 11:35:10 by kchabala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && ((unsigned char*)s1)[i] == ((unsigned char*)s2)[i])
	{
		i++;
	}
	if (i == n)
		return (((unsigned char *)s1)[n - 1] - ((unsigned char *)s2)[n - 1]);
	return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}
