/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevaspid <romain.brendle.guido@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:13:31 by nevaspid          #+#    #+#             */
/*   Updated: 2022/11/27 17:10:09 by nevaspid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_atoi(const char *str)
{
	int i;
	int negamorph;
	int number;

	number = 0;
	negamorph = 1;
	i = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			negamorph = -1;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number += str[i++] - 48;
	}
	number *= negamorph;
	return (number);
}

