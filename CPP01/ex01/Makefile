CC		= c++

CFLAGS	= -Wall -Werror -Werror -std=c++98 -fsanitize=address

SRCS	= main.cpp Zombie.cpp ZombieHorde.cpp

OBJS	= ${SRCS:.cpp=.o}

RM		= rm -f

NAME	= Zombie1

all:	${NAME}
.cpp.o:
				${CC} ${CFLAGS} -c $< -oo ${<:.cpp=.o}

${NAME}: ${OBJS}
		@${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
		echo "${OBJS}"
		${RM} ${OBJS}

fclean:  clean
			${RM} ${NAME}

re: 	fclean all