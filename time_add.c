/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchabala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 11:59:27 by kchabala          #+#    #+#             */
/*   Updated: 2018/08/31 11:59:31 by kchabala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftlist.h"

void		six_month(struct stat user, int i, int j)
{
	char *str;
	char *src;

	src = ft_strdup(ctime(&user.st_mtime));
	str = ft_strnew(ft_strlen(src));
	while (i != 4)
		++i;
	while (i != 11)
	{
		str[j] = src[i];
		++i;
		++j;
	}
	while (i != 19)
		++i;
	while (i != 24)
	{
		str[j] = src[i];
		++i;
		++j;
	}
	ft_printf("%s ", str);
	free(src);
	free(str);
}

void		time_read(struct stat user, int i, int j)
{
	char				*str;
	char				*src;
	unsigned long long	f_time;

	f_time = time(NULL) - user.st_mtime;
	if (f_time >= 30 * 6 * 24 * 3600)
	{
		six_month(user, 0, 0);
		return ;
	}
	src = ft_strdup(ctime(&user.st_mtime));
	str = ft_strnew(ft_strlen(src));
	while (i != 4)
		++i;
	while (i != 16)
	{
		str[j] = src[i];
		++i;
		++j;
	}
	ft_printf("%s ", str);
	free(src);
	free(str);
}
