/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:49:08 by rkurnava          #+#    #+#             */
/*   Updated: 2022/10/04 17:18:30 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	slen;
	char	*mysrc;
	size_t	i;

	mysrc = (char *)src;
	slen = ft_strlen(mysrc);
	i = 0;
	if (size == 0)
		return (slen);
	if (mysrc)
	{
		while (mysrc[i] && i < size - 1)
		{
			dest[i] = mysrc[i];
			i ++;
		}
	}
	dest[i] = '\0';
	return (slen);
}
