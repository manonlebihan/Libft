LIBNAME = libft.a
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -I. -g
AR      = ar
ARFLAGS = -cvq
SRC     = ${wildcard *.c}
OBJ     = $(SRC:.c=.o)

all: ${LIBNAME}

${LIBNAME}: ${OBJ}
	${AR} $(ARFLAGS) $@ $^

%.o: %.c %.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${LIBNAME}

re: fclean all

.PHONY : clean fclean