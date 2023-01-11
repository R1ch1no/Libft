/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:20:14 by rkurnava          #+#    #+#             */
/*   Updated: 2022/10/15 13:27:29 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strsize(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != c && str[i])
	{
		i++;
		count++;
	}
	return (count);
}

static char	**ft_make2darr(char *str, char c, char **res)
{
	int	i;
	int	a;
	int	letters;

	a = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] != c && str[i] != '\0')
		{
			letters = ft_strsize(&str[i], c);
			res[a] = ft_substr(&str[i], 0, letters);
			a++;
		}
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	res[a] = (char *)0;
	return (res);
}

static int	ft_words(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			count ++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**res;
	int		words;

	str = (char *)s;
	words = ft_words(str, c);
	if (s[0] == '\0')
	{
		res = malloc(sizeof(char *));
		res[0] = 0;
		return (res);
	}
	res = malloc((words + 1) * sizeof(char *));
	if (!res)
		return (res);
	return (ft_make2darr(str, c, res));
}
