/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:34:38 by rkurnava          #+#    #+#             */
/*   Updated: 2022/10/06 14:35:32 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len;

	str = (char *)s;
	len = ft_strlen(str);
	while (len + 1 > -1)
	{
		if (str[len] == (char)c)
		{
			return (&str[len]);
		}
		len --;
	}
	if (c == 0)
		return (&str[ft_strlen(s)]);
	return (0);
}
