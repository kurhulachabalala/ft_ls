/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchabala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:49:25 by kchabala          #+#    #+#             */
/*   Updated: 2018/09/04 11:49:27 by kchabala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && i < n && s2[i])
		i++;
	if (n == i)
		return (((unsigned char *)s1)[n - 1] - ((unsigned char *)s2)[n - 1]);
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
