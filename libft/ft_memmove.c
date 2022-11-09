/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevaspid <romain.brendle.guido@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:19:29 by nevaspid          #+#    #+#             */
/*   Updated: 2022/11/07 20:53:00 by nevaspid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	i++;
	return (i);
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	const  char *	tempsrc;
	 char *			tempdest;
	
	i = 0;
	tempdest = ( char *)dest;
	tempsrc = (const  char *)src;
	
	if (!tempsrc && !tempdest)
		return (0);
	else if (ft_strlen(tempdest) < ft_strlen(tempsrc))
	{
		i = len - 1;
		while (i < len)
		{
			tempdest[i] = tempsrc[i];
			i--;
		}
		dest = tempdest;
		return (dest);
	}
	else
	{
		while (i < len)
		{
			tempdest[i] = tempsrc[i];
			i++;
		}
		dest = tempdest;
		return (dest);
	}
}
