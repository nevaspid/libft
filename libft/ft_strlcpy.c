/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevaspid <romain.brendle.guido@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:24:05 by nevaspid          #+#    #+#             */
/*   Updated: 2022/11/09 17:25:52 by nevaspid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t lendest)
{
	size_t i;

	i = 0;
	if (!src)
	return (0);
	if (lendest < ft_strlen(src))
	{
		while (i < lendest && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		return (i);
	}
	if (i < lendest && src[i] != '\0')
	{
		while (i < lendest && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (i);
	}
	return (i);
}


// int	main(void)
// {
// 	char src[50] = "maman aide moi";
// 	char dest[60] = "stp";
// 	printf("%s\n", dest);
// 	//printf("%lu, la vraie\n", strlcpy(dest, src, 5));
// 	printf("%zu, la mienne\n", ft_strlcpy(dest, src, 50));
// 	printf("%s\n", dest);
// }