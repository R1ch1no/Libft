/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:13:34 by rkurnava          #+#    #+#             */
/*   Updated: 2022/10/19 16:15:29 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print(char p, int fd)
{
	write (fd, &p, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd)
	{
		if (n == -2147483648)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_print('8', fd);
		}
		else if (n < 0)
		{
			ft_print('-', fd);
			ft_putnbr_fd(-n, fd);
		}
		else if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_print((48 + n % 10), fd);
		}
		else
		{
			ft_print((48 + n % 10), fd);
		}
	}
}
