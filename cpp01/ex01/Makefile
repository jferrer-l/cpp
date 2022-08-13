NAME = xd_tests

SRCS = main.cpp

HEADER = Zombie.hpp
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = ${SRCS:.cpp=.o}

${NAME}: ${OBJS}
		@echo "\033[36m"--Compilando--"\033[0m ";
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@clear

all:	${NAME}

clean:
		${RM} ${OBJS}
		@clear
		@echo "\033[34m"🗑️\  Todo depurado correctamente  \🗑️"\033[0m"

fclean:	clean
		${RM} ${NAME}
		@clear
		@echo "\033[34m"🗑️\  Todo depurado correctamente  \🗑️"\033[0m"

re:		fclean all

.PHONY: all clean fclean re

