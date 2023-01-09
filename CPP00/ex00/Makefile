CC			= c++

CFLAGS		= -Wall -Wextra -Werror -std=c++98

SRCS		= ./megaphone.cpp

OBJS		= ${SRCS:.cpp=.o}

RM			= rm -f

NAME		= megaphone

all:	${NAME}
.cpp.o:
				${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}


$(NAME): $(OBJS)
		@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
				echo "$(OBJS)"
				${RM} $(OBJS)

fclean:		clean
				${RM} ${NAME}

re:				fclean all