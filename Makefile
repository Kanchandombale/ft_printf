NAME = libftprintf.a

PART1 = 

SRC = ${PART1}

OBJS = ${SRC:.c=.o}

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I .

libft:
		make -C ./libft

.o:.c
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME): libft ${OBJS}
		ar rcs ${NAME} ${OBJS}

all: ${NAME}

bonus: ${OBJS} 
		ar rcs ${NAME} ${OBJS}

clean:
		${RM} ${OBJS} ${BONUS_OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re