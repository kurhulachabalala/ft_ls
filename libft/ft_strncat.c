/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchabala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:48:59 by kchabala          #+#    #+#             */
/*   Updated: 2018/09/04 11:49:05 by kchabala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str1, const char *str2, size_t n)
{
	size_t i;
	size_t count;

	count = ft_strlen(str1);
	i = 0;
	while ((i + 1) <= n)
	{
		str1[count + i] = str2[i];
		i++;
	}
	str1[count + i] = '\0';
	return (str1);
}
