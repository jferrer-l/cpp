NAME = exec

SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

HEADER = AMateria.hpp Character.hpp Cure.hpp Ice.hpp MateriaSource.hpp ICharacter.hpp IMateriaSource.hpp
CC = clang++
RM = rm -f
CFLAGS = -W -Wall -Werror -std=c++98 -MMD
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

