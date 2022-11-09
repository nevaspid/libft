/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevaspid <romain.brendle.guido@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:24:05 by nevaspid          #+#    #+#             */
/*   Updated: 2022/11/09 16:12:55 by nevaspid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t lendest)
{
	size_t i;

	i = 0;
	while (dest[i] < lendest)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

int	main(void)
{
	char src[50] = "1111";
	char dest[60] = "22222";

	printf("%lu, la vraie", strlcpy(dest, src, 20));
	printf("%zu, la mienne", ft_strlcpy(dest, src, 20));
}
