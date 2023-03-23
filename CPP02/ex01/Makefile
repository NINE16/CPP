CC		= c++

CFLAGS	= -Wall -Werror -Wextra -std=c++98

SRCS	= main.cpp Fixed.cpp

OBJS	= ${SRCS:.cpp=.o}

RM		= rm -f 

NAME	= Fixed

all: 	${NAME}

.cpp.o:
		${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJS}
		@${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean: 	
		echo "${OBJS}"
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re:		fclean all 