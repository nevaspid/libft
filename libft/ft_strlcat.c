/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevaspid <romain.brendle.guido@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:16:28 by nevaspid          #+#    #+#             */
/*   Updated: 2022/12/19 20:51:27 by nevaspid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destlimit)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (destlimit == 0)
		return (ft_strlen(src));
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
