/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchabala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:46:56 by kchabala          #+#    #+#             */
/*   Updated: 2018/09/04 11:47:01 by kchabala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mix;
	int		i1;
	int		i2;

	i1 = 0;
	mix = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!mix)
		return (NULL);
	while (s1[i1])
	{
		mix[i1] = s1[i1];
		i1++;
	}
	i2 = 0;
	while (s2[i2])
	{
		mix[i1] = s2[i2];
		i1++;
		i2++;
	}
	mix[i1] = '\0';
	return (mix);
}
