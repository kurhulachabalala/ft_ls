/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wstr_precision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchabala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 12:07:59 by kchabala          #+#    #+#             */
/*   Updated: 2018/09/04 12:08:11 by kchabala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t			*ft_wcharnew(wchar_t *str, int i)
{
	str = malloc((i + 1) * sizeof(wchar_t));
	if (!str)
		exit(0);
	str[0] = 0;
	return (str);
}

static int		wildcard_prec(int *i, va_list ap)
{
	int prec;

	prec = va_arg(ap, int);
	if (prec < 0)
		prec = 0;
	else if (prec == 0)
		prec = -1;
	++*i;
	++*i;
	return (prec);
}

int				precision(const char *str, int *i, va_list ap)
{
	int		prec;
	char	*cpy;

	cpy = (char *)malloc(ft_strlen(str) * sizeof(char));
	if (!cpy)
		exit(0);
	prec = 0;
	if (str[*i] == '.')
	{
		if (str[*i + 1] == '*')
		{
			free(cpy);
			return (wildcard_prec(i, ap));
		}
		while (str[++*i] >= '0' && str[*i] <= '9')
			cpy[prec++] = str[*i];
		cpy[prec] = '\0';
		prec = ft_atoi(cpy);
		if (prec == 0)
			prec = -1;
	}
	free(cpy);
	return (prec);
}

int				wchar_len(wchar_t wc)
{
	size_t	i;
	wchar_t *str;

	i = 0;
	str = ft_itoa_unsigned_ll(wc, 2, 0);
	i = ft_strlen_null(str, 0);
	free(str);
	if (i <= 7)
		return (1);
	else if (i <= 11)
		return (2);
	else if (i <= 16)
		return (3);
	if (1114111 >= ft_watoi(ft_itoa_unsigned_ll(wc, 10, 0)))
		return (4);
	exit(-1);
}

int				valid_letter(const char letter)
{
	if (letter == 'O' || letter == 'D' || letter == 'U' || letter == 'I'\
	|| letter == 'X' || letter == 'x' || letter == 'o' || letter == 'p' \
	|| letter == 'd' || letter == 'i' || letter == 'u' || letter == 'n')
		return (1);
	return (0);
}
