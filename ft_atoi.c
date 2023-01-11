/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:17:31 by rkurnava          #+#    #+#             */
/*   Updated: 2022/10/07 13:22:21 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	i;
	unsigned char	*ostr;
	long			result;
	int				sign;

	ostr = (unsigned char *) str;
	i = 0;
	sign = 1;
	result = 0;
	while (ostr[i] == ' ' || (ostr[i] > 8 && ostr[i] < 14))
		i++;
	if (ostr[i] == '-')
		sign = sign * -1;
	if (ostr[i] == '+' || ostr[i] == '-')
		i++;
	while (ostr[i] <= '9' && ostr[i] >= '0')
	{
		result = (result * 10) + (ostr[i++] - '0');
		if (result * sign > 2147483647)
			return (-1);
		if (result * sign < -2147483648)
			return (0);
	}
	return (result * sign);
}
