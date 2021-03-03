# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/03 22:33:22 by manuel            #+#    #+#              #
#    Updated: 2021/03/03 23:11:21 by manuel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	= -Wall -Wextra -Werror
CC		= gcc
RM		= rm -f

NAME	= libft.a

INCDIR	= ./

SRCS	= ft_atoi.c ft_isalpha.c ft_isprint.c ft_memchr.c ft_memmove.c \
		  ft_putendl_fd.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_strtrim.c \
		  ft_bzero.c ft_isascii.c ft_itoa.c ft_memcmp.c ft_memset.c \
		  ft_putnbr_fd.c ft_strdup.c ft_strlen.c ft_strnstr.c ft_tolower.c \
		  ft_isalnum.c ft_isdigit.c ft_memccpy.c ft_memcpy.c ft_putchar_fd.c \
		  ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_strrchr.c ft_toupper.c \
		  ft_substr.c ft_calloc.c ft_strlcpy.c ft_split.c

OBJS	= ${SRCS:.c=.o}

all:		${NAME}

%.o:%.c
			${CC} ${CFLAGS} -c $< -o $@ -I ${INCDIR}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

clean:
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re: 		fclean all

.PHONY: re clean fclean all
