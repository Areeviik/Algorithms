NAME = searching

FLAGS = -Werror -Wextra -Wall 

SRCS = $(shell find "." -name "*.c")

OBJS = ${SRCS:.c=.o}

RM = rm -rf

CC = gcc

all:${NAME}

${NAME}: 	${OBJS}
		${CC} ${FLAGS} -o ${NAME} ${OBJS} 

clean: 
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re