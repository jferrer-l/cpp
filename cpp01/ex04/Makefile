NAME = replace

SRCS = main.cpp reader.cpp
TEST = tests.cpp reader.cpp

HEADER = replace.hpp
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD
OBJS = ${SRCS:.cpp=.o}
OTESTS = ${TEST:.cpp=.o}
DEPS = ${SRCS:.cpp=.d}
TDEPS = ${TEST:.cpp=.d}
BORRAR = ${NAME:=.d}

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

${NAME}: ${OBJS}
		@echo "\033[36m"--Compilando--"\033[0m ";
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		${RM} ${BORRAR}
		@clear

tests:	${OTESTS}
		@echo "\033[36m"--Compilando Tests--"\033[0m ";
		${CC} ${CFLAGS} ${TEST} -o tests
		${RM} ${BORRAR}
		@clear

all:	${NAME} tests

-include ${DEPS} ${TDEPS}

clean:
		${RM} ${OBJS} ${DEPS}
		@clear
		@echo "\033[34m"🗑️\  Todo depurado correctamente  \🗑️"\033[0m"

fclean:	clean
		${RM} ${NAME} ${TDEPS} ${OTESTS} tests
		@clear
		@echo "\033[34m"🗑️\  Todo depurado correctamente  \🗑️"\033[0m"

re:		fclean all

.PHONY: all clean fclean re

