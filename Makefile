SRCS	= ${wildcard ft_*.c}

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC	= gcc
RM	= rm -rf

CFLAGS	= -Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${$<:.c.o}

all:		${OBJS}
			ar rc ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}