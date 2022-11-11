/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevaspid <romain.brendle.guido@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:24:05 by nevaspid          #+#    #+#             */
/*   Updated: 2022/11/11 11:22:39 by nevaspid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t lendest)
{
size_t	i;
size_t	lensrc;

lensrc = ft_strlen(src);
if (lendest != 0)
{
	i = 0;
	while (src[i] != '\0' && i < lendest - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
return (lensrc);
}
