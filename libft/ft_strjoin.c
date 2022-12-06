/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevaspid <romain.brendle.guido@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:14:43 by nevaspid          #+#    #+#             */
/*   Updated: 2022/12/03 20:54:14 by nevaspid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*mariage;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	mariage = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!mariage)
		return (NULL);
	while (s1[i])
	{
		mariage[i] = s1[i];
		i++;
	}
	while (s2[j])
		mariage[i++] = s2[j++];
	mariage[i] = '\0';
	return	(mariage);
}
