/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevaspid <romain.brendle.guido@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:18:38 by nevaspid          #+#    #+#             */
/*   Updated: 2022/11/16 12:29:13 by nevaspid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
	{
		c = c + 32;
		return (c);
	}
	return (c);
}
