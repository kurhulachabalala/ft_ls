/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchabala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:52:51 by kchabala          #+#    #+#             */
/*   Updated: 2018/09/04 11:52:55 by kchabala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_bzero(str, (size + 1));
	i = 0;
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
