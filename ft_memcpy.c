/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:32:08 by rkurnava          #+#    #+#             */
/*   Updated: 2022/10/06 18:00:59 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*mysrc;
	char		*mydest;
	size_t		i;

	mysrc = (char *)src;
	mydest = (char *)dest;
	i = 0;
	if (!src && !dest)
		return (0);
	while (i < n)
	{
		*(mydest + i) = *(mysrc + i);
		i++;
	}
	return (mydest);
}
