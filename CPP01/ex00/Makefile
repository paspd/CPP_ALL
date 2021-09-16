NAME			=		Zombie

HEADER			=		Zombie.hpp

CC				=		@clang++

CFLAGS			=		-Wall -Wextra -Werror

SRCS			=		main.cpp \
						Zombie.cpp \
						newZombie.cpp \
						randomChump.cpp

OBJS			=		$(SRCS:.cpp=.o)

all				:		$(NAME)


$(NAME)		: $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -I $(HEADER) -o $(NAME)
		@echo "\033[34m[Zombie] Compiled\033[0m"

%.o: %.cpp $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

clean		:
		@echo "\033[32m[Zombie] Clean\033[0m"
		@rm -f $(OBJS)

fclean		:
		@echo "\033[32m[Zombie] Clean\033[0m"
		@rm -f $(OBJS)
		@rm -f $(NAME)

re			:		fclean all

.PHONY: all bonus clean fclean re