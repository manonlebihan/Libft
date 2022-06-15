# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mle-biha <mle-biha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/13 19:48:34 by mle-biha          #+#    #+#              #
#    Updated: 2022/06/15 14:17:53 by mle-biha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -I. -g
AR      = ar
ARFLAGS = -cvq
SRC     = ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \

OBJ     = $(SRC:.c=.o)

BONUS_SRC = ft_lstnew.c \

BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: ${NAME}

${NAME}: ${OBJ}
	${AR} $(ARFLAGS) $@ $^

%.o: %.c %.h
	$(CC) $(CFLAGS) -o $@ -c $<

bonus: ${OBJ} ${BONUS_OBJ}
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY : clean fclean re
