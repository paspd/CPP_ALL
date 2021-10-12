NAME			=		Polymorphism

WRONG_NAME			=		WrongPolymorphism

HEADER			=		Animal.hpp

CC				=		@clang++

CFLAGS			=		-Wall -Werror -Wextra

SRCS			=		main.cpp \
						Animal.cpp \
						Cat.cpp \
						Dog.cpp

WRONG_SRCS			=	Wrongmain.cpp \
						WrongAnimal.cpp \
						WrongCat.cpp \
						WrongDog.cpp


OBJS			=		$(SRCS:.cpp=.o)

WRONG_OBJS			=		$(WRONG_SRCS:.cpp=.o)

all				:		$(NAME)


$(NAME)		: $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -I $(HEADER) -o $(NAME)
		@echo "\033[34m[$(NAME)] Compiled\033[0m"

wrong		: $(WRONG_OBJS)
		$(CC) $(CFLAGS) $(WRONG_OBJS) -I $(HEADER) -o $(WRONG_NAME)
		@echo "\033[34m[$(WRONG_NAME)] Compiled\033[0m"


%.o: %.cpp $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

clean		:
		@echo "\033[32m[$(NAME)] Clean\033[0m"
		@rm -f $(OBJS) $(WRONG_OBJS)

fclean		:
		@echo "\033[32m[$(NAME)] Clean\033[0m"
		@rm -f $(OBJS) $(WRONG_OBJS)
		@rm -f $(NAME) $(WRONG_NAME)

re			:		fclean all

.PHONY: all bonus clean fclean re