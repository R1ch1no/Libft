/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:02:24 by rkurnava          #+#    #+#             */
/*   Updated: 2022/10/20 19:08:34 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*substr;
	size_t	i;

	if (s == 0)
		return (0);
	i = 0;
	str = (char *)s;
	if (start >= (ft_strlen(s)))
		len = 0;
	else if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	substr = malloc(len + 1);
	if (!substr)
		return (0);
	while (len > 0 && str[start + i])
	{
		substr[i] = str[start + i];
		i++;
		len --;
	}
	substr[i] = '\0';
	return (substr);
}
