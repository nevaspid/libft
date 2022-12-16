# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nevaspid <romain.brendle.guido@gmail.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 14:27:12 by nevaspid          #+#    #+#              #
#    Updated: 2022/12/16 20:10:24 by nevaspid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memcpy.c ft_memset.c ft_strlen.c \
ft_isalnum.c ft_isascii.c ft_isprint.c ft_memmove.c ft_strlcpy.c ft_strmapi.c ft_striteri.c \
ft_strrchr.c ft_strlcat.c ft_tolower.c ft_toupper.c ft_strchr.c ft_strncmp.c ft_memchr.c ft_itoa.c\
ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \

all: ${NAME}

OBJS = ${SRC:.c=.o}

$(NAME) :	${OBJS}
	ar -rcs ${NAME} ${OBJS}
	ranlib ${NAME}

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

clean :
	${RM} $(OBJS)

fclean: clean
	${RM} $(NAME)

re : fclean all

.PHONY: all clean fclean re