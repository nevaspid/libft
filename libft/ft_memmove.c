/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevaspid <romain.brendle.guido@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:19:29 by nevaspid          #+#    #+#             */
/*   Updated: 2022/11/11 11:22:26 by nevaspid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
