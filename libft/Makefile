# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nevaspid <romain.brendle.guido@gmail.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 14:27:12 by nevaspid          #+#    #+#              #
#    Updated: 2022/11/07 16:20:39 by nevaspid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = *.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memcpy.c ft_memset.c ft_strlen.c \
ft_isalnum.c ft_isascii.c ft_isprint.c ft_memmove.c ft_strlcpy.c \

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