/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevaspid <romain.brendle.guido@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 20:48:59 by nevaspid          #+#    #+#             */
/*   Updated: 2022/12/01 15:30:58 by nevaspid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*final_s;
	int		i;

	i = ft_strlen(s);
	final_s = malloc(sizeof(char) * (i + 1));
	if (!s || !final_s)
		return (NULL);
	else
	{
		ft_strlcpy(final_s, s, (i + 1));
		return (final_s);
	}
}
