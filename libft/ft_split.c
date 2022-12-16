/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevaspid <romain.brendle.guido@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:11:57 by nevaspid          #+#    #+#             */
/*   Updated: 2022/12/16 18:28:47 by nevaspid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(const char *s, char c)
{
	int	inside;
	int	counter;
	int	i;

	i = 0;
	counter = 0;
	inside = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			inside = 0;
			i++;
			if (s[i] == '\0')
				return (counter);
		}
		if (inside == 0)
		{
			inside = 1;
			counter++;
		}
		i++;
	}
	return (counter);
}

static size_t	ft_strlen_split(const char *s, char c, size_t i)
{
	size_t	j;

	j = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		j++;
	}
	return (j);
}

char	**iamfree(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		inside;
	int		index;
	size_t	i;
	char	**tab;

	i = 0;
	index = 0;
	inside = 0;
	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (countwords(s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
		{
			inside = 0;
			i++;
			if (s[i] == '\0')
			{
				tab[index] = 0;
				return (tab);
			}
		}
		if (inside == 0)
		{
			inside = 1;
			tab[index++] = ft_substr(s, i, ft_strlen_split(s, c, i));
			if (!tab[index - 1])
				return (iamfree(tab));
			i += ft_strlen_split(s, c, i) - 1;
		}
		i++;
	}
	tab[countwords(s, c)] = 0;
	return (tab);
}
