/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchabala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:36:41 by kchabala          #+#    #+#             */
/*   Updated: 2018/09/04 11:36:45 by kchabala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void *cpy;

	cpy = malloc(len * sizeof(char));
	ft_memcpy(cpy, src, len);
	ft_memcpy(dst, cpy, len);
	free(cpy);
	return (dst);
}
