/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:41:51 by rkurnava          #+#    #+#             */
/*   Updated: 2022/10/19 13:33:14 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int num)
{
	int	len;

	len = 0;
	if (num < 0)
		len ++;
	while (num / 10)
	{
		len ++;
		num = num / 10;
	}
	return (len + 1);
}

static char	*ft_putnbr(int nb, char *str, int l, int ilen)
{
	if (nb == -2147483648)
	{
		l++;
		ft_putnbr(nb / 10, str, l, ilen);
		str[ilen - l] = '8';
	}
	else if (nb < 0)
	{
		ft_putnbr(-nb, str, l, ilen);
	}
	else if (nb > 9)
	{
		l ++;
		ft_putnbr(nb / 10, str, l, ilen);
		str[ilen - l] = 48 + nb % 10;
	}
	else
	{
		l ++;
		str[ilen - l] = (48 + nb % 10);
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*istr;
	int		ilen;
	int		l;

	ilen = ft_intlen(n);
	istr = malloc(ilen + 1);
	l = 0;
	if (!istr)
		return (NULL);
	if (n < 0)
	{
		istr[0] = '-';
	}
	istr = ft_putnbr(n, istr, l, ilen);
	istr[ilen] = '\0';
	return (istr);
}
