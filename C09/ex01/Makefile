SRC_DIR = srcs/
INC_DIR = includes/
SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJS = ${addprefix ${SRC_DIR},${SRCS:.c=.o}}

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ${INC_DIR}

OUTPUT = libft.a

all : ${OUTPUT}

${OUTPUT}: ${OBJS}
	ar -rcs $@ $^

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${OUTPUT}

re: fclean all

.PHONY:	all clean fclean re
