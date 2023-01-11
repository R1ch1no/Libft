/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:49:08 by rkurnava          #+#    #+#             */
/*   Updated: 2022/10/04 17:29:18 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*mysrc;
	size_t		i;
	size_t		slen;
	size_t		dlen;

	mysrc = (char *)src;
	i = 0;
	slen = ft_strlen(mysrc);
	dlen = ft_strlen(dest);
	if (size == 0)
		return (slen);
	if (size < dlen)
		return (slen + size);
	if (!dest)
		return (slen);
	while (src[i] && (dlen + i) < size -1)
	{
		dest[dlen + i] = mysrc[i];
		i++;
	}
	dest[dlen + i] = 0;
	return (slen + dlen);
}
