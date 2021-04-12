# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/03 22:33:22 by manuel            #+#    #+#              #
#    Updated: 2021/04/12 15:10:42 by msousa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS	= -Wall -Wextra -Werror
CC		= gcc
RM		= rm -f
AR		= ar rc

NAME	= libft.a

INCDIR	= ./

SRCS	= ft_atoi.c ft_isalpha.c ft_isprint.c ft_memchr.c ft_memmove.c \
		  ft_putendl_fd.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_strtrim.c \
		  ft_bzero.c ft_isascii.c ft_itoa.c ft_memcmp.c ft_memset.c \
		  ft_putnbr_fd.c ft_strdup.c ft_strlen.c ft_strnstr.c ft_tolower.c \
		  ft_isalnum.c ft_isdigit.c ft_memccpy.c ft_memcpy.c ft_putchar_fd.c \
		  ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_strrchr.c ft_toupper.c \
		  ft_substr.c ft_calloc.c ft_strlcpy.c ft_split.c
SRCS_B	= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
		  ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \
		  ft_strcpy_bonus.c

OBJS	= ${SRCS:.c=.o}
OBJS_B	= ${SRCS_B:.c=.o}

${NAME}:	${OBJS}
			${AR} $@ $^
			ranlib $@

bonus:		${OBJS} ${OBJS_B}
			${AR} ${NAME} $^
			ranlib ${NAME}

%.o:%.c		libft.h
			${CC} ${CFLAGS} -c $< -o $@

all:		${NAME}

clean:
			${RM} ${OBJS} ${OBJS_B}

fclean: 	clean
			${RM} ${NAME}

re: 		fclean all

.PHONY: re clean fclean all
