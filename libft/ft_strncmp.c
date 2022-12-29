/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevaspid <romain.brendle.guido@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:36:21 by nevaspid          #+#    #+#             */
/*   Updated: 2022/12/19 20:20:24 by nevaspid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (!ft_isascii(s1[i]) || !ft_isascii(s2[i]))
			i++;
		if (s1[i] > s2[i] || !s2[i])
			return (1);
		if (s1[i] < s2[i] || !s1[i])
			return (-1);
		i++;
	}
	return (0);
}
