CC		= c++

CFLAGS	= -Wall -Werror -Wextra -std=c++98 #-fsanitize=address

SRCS	= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

OBJS	= ${SRCS:.cpp=.o}

RM		= rm -f 

NAME	= Intern

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

re:		fclean all