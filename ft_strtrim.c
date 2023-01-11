/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:27:16 by rkurnava          #+#    #+#             */
/*   Updated: 2022/10/12 16:37:40 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_front_back(char c, char *needle)
{
	int	j;

	j = 0;
	while (needle[j])
	{
		if (c == needle[j])
			return (1);
		j++;
	}
	return (0);
}

static char	*ft_core(char *str, char *rem, int i, int slen)
{
	char	*res;
	int		j;

	j = 0;
	while (ft_front_back(str[i], rem) == 1)
		i++;
	if (i - 1 == slen)
	{
		res = malloc(1);
		res[j] = '\0';
		return (res);
	}
	while (ft_front_back(str[slen], rem) == 1)
		slen --;
	res = malloc(slen - i + 2);
	if (!res)
		return (NULL);
	while (str[i] && i < slen +1)
		res[j++] = str[i++];
	res[j] = '\0';
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*rem;
	int		i;
	int		slen;

	if (!s1)
		return (0);
	str = (char *)s1;
	rem = (char *)set;
	i = 0;
	slen = ft_strlen(str) -1;
	return (ft_core(str, rem, i, slen));
}
