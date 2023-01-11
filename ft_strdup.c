/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkurnava <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:41:33 by rkurnava          #+#    #+#             */
/*   Updated: 2022/10/07 16:47:55 by rkurnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ori;
	char	*arr;
	int		i;

	i = 0;
	ori = (char *) src;
	arr = (char *) malloc (ft_strlen(ori) * sizeof (char) + 1);
	if (!arr)
		return (arr);
	while (ori[i])
	{
		arr[i] = ori[i];
		i ++;
	}
	arr[i] = '\0';
	return (arr);
}
