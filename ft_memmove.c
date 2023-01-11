/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:22:13 by rkurnava          #+#    #+#             */
/*   Updated: 2022/10/06 13:10:35 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*mysrc;
	char	*mydest;

	mysrc = (char *)src;
	mydest = (char *)dest;
	if (src == dest)
		return (dest);
	if (mysrc < mydest)
	{
		while (n --)
		{
			*(mydest + (n)) = *(mysrc + (n));
		}
		return (dest);
	}
	while (n --)
		*mydest++ = *mysrc++;
	return (dest);
}
