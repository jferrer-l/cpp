NAME = create_zombies

SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

HEADER = Zombie.hpp
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD
OBJS = ${SRCS:.cpp=.o}
DEPS = ${SRCS:.cpp=.d}
BORRAR = ${NAME:=.d}

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

${NAME}: ${OBJS}
		@echo "\033[36m"--Compilando--"\033[0m ";
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		${RM} ${BORRAR}
		@clear

all:	${NAME}

-include ${DEPS}

clean:
		${RM} ${OBJS} ${DEPS}
		@clear
		@echo "\033[34m"🗑️\  Todo depurado correctamente  \🗑️"\033[0m"

fclean:	clean
		${RM} ${NAME}
		@clear
		@echo "\033[34m"🗑️\  Todo depurado correctamente  \🗑️"\033[0m"

re:		fclean all

.PHONY: all clean fclean re

