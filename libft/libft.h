/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevaspid <romain.brendle.guido@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:40:25 by nevaspid          #+#    #+#             */
/*   Updated: 2022/11/28 20:00:58 by nevaspid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define MAX_NBR 2147483647
# define MIN_NBR -2147483648
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;

}					t_list;

/*
** First Part
*/

void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
int					ft_isprint(int c);
int					ft_isalnum(int c);
int					ft_isdigit(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
size_t				ft_strlen(const char *s);
size_t				ft_strlcat(char *dest, const char *src, size_t destlimit);
size_t				ft_strlcpy(char *dest, const char *src, size_t destlimit);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int 				ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
void 				*ft_memchr(const void *s, int c, size_t n);
int 				ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strnstr(const char *haystack, const char *needle, size_t len);
int					ft_atoi(const char *str);
void 				*ft_calloc(size_t count, size_t size);

#endif
