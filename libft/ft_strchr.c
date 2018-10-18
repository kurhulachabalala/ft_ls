/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchabala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:43:14 by kchabala          #+#    #+#             */
/*   Updated: 2018/09/04 11:43:17 by kchabala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i] && str[i] != (unsigned char)c)
		i++;
	if (!str[i] && str[i] != (unsigned char)c)
		return (NULL);
	else
		return ((char *)(str + i));
}
