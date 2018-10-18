/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchabala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 11:55:58 by kchabala          #+#    #+#             */
/*   Updated: 2018/08/31 11:56:01 by kchabala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftlist.h"

int		read_a_dir(DIR *file)
{
	struct dirent *tmp;

	tmp = readdir(file);
	while (tmp)
	{
		if (tmp->d_name[0] != '.')
			ft_printf("%s\n", tmp->d_name);
		tmp = readdir(file);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int i;
	DIR *tmp;

	i = 1;
	to_parsing(argv);
	return (1);
}
