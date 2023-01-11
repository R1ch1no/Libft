/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:07:00 by rkurnava          #+#    #+#             */
/*   Updated: 2022/10/07 13:17:00 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!ft_strlen((char *)little))
		return ((char *)big);
	if (len == 0)
		return (NULL);
	i = 0;
	while (*(big + i) && i < len)
	{
		j = 0;
		while (*(big + i + j) == *(little + j) && (i + j) < len)
		{
			if (!*(little + j + 1))
				return ((char *)(big + i));
			j ++;
		}
		i ++;
	}
	return (NULL);
}
