SRCS = megaphone.cpp

NAME = megaphone
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
OBJS = ${SRCS:.cpp=.o}



${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${SRCS} -o ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re

