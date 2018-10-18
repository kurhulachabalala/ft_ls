/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchabala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 10:50:05 by kchabala          #+#    #+#             */
/*   Updated: 2018/09/04 10:50:12 by kchabala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_sign(char c)
{
	if (c == '-')
		return (-1);
	else
		return (1);
}

int				ft_atoi(const char *str)
{
	int i;
	int sign;
	int temp;
	int nb;

	i = 0;
	temp = 0;
	nb = 0;
	if (!str)
		return (-1);
	while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r'\
			|| str[i] == '\v' || str[i] == '\f') && str[i])
		i++;
	sign = ft_sign(str[i]);
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		nb = temp + str[i] - '0';
		temp = nb * 10;
		i++;
	}
	nb = nb * sign;
	return (nb);
}
