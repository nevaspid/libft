/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevaspid <romain.brendle.guido@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:19:29 by nevaspid          #+#    #+#             */
/*   Updated: 2022/11/30 17:45:56 by nevaspid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char *tempsrc;
	char *tempdest;
	size_t i;

	if (!dest && !src)
		return (0);
	i = 0;
	tempsrc = (char *)src;
	tempdest = (char *)dest;
	if (tempdest > tempsrc)
	{
		while (len-- > 0)
			tempdest[len] = tempsrc[len];
		return (tempdest);
	}
	while (i < len)
	{
		tempdest[i] = tempsrc[i];
		i++;
	}
	return (tempdest);
}
