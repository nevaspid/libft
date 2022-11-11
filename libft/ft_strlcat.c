/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevaspid <romain.brendle.guido@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:16:28 by nevaspid          #+#    #+#             */
/*   Updated: 2022/11/11 13:57:11 by nevaspid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t lendest)
{
	size_t i;
	size_t starter;

	i = 0;
	starter = ft_strlen(dest);
	if (lendest = 0)
	return (ft_strlen(src));
	while (src[i] && i < lendest)
	{
		dest[starter] = src[i];
		i++;
		starter++;
	}
	return (starter);
	