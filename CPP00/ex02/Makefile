NAME		=	tests

SRCS		=	./tests.cpp \
				./Account.cpp
	
OBJS		=	$(SRCS:.cpp=.o)

CPP			=	clang++

%.o:		%.cpp 
			@$(CPP)   -c $< -o $(<:.cpp=.o)

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -f

all :		$(NAME)

$(NAME) :	$(OBJS)
			@$(CPP) $(CFLAGS) -o $(NAME) $(OBJS) -I.
			@echo "\033[33m[Tests] \033[34mCompiled\033[0m"

clean :		
			@$(RM) $(OBJS)
			@echo "\033[33m[Tests] \033[32mClean\033[0m"

fclean 	:	clean
			@$(RM) $(NAME)

re :		fclean all

.PHONY :	all clean fclean re