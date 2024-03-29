/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:06:14 by rkurnava          #+#    #+#             */
/*   Updated: 2022/10/19 16:09:39 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = -1;
	if (s)
	{
		while (s[++i])
			write(fd, &s[i], 1);
		write(fd, "\n", 1);
	}
}
