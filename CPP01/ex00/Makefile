CC		= c++

CFLAGS  = -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp NewZombie.cpp randomChump.cpp Zombie.cpp

OBJS	= ${SRCS:.cpp=.o}

RM		= rm -f

NAME	= Zombie

all:	${NAME}
.cpp.o:
				${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJS}
		@${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
		echo "${OBJS}"
		${RM} ${OBJS}

fclean:  clean
			${RM} ${NAME}

re:		flcean all