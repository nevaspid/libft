/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevaspid <romain.brendle.guido@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:16:28 by nevaspid          #+#    #+#             */
/*   Updated: 2022/12/09 13:55:03 by nevaspid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t destlimit)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (destlimit == 0)
		return (0);
	while (dest[i] && i < destlimit)
		i++;
	j = i;
	if (destlimit > 0)
	{
		while (src[i - j] != '\0' && i < destlimit - 1)
		{
			dest[i] = src[i - j];
			i++;
		}
		if (j < destlimit)
			dest[i] = '\0';
	}
	return (ft_strlen(src) + j);
}
