NAME			=		I_don_t_want_to_set_the_world_on_fire

HEADER			=		Animal.hpp

CC				=		@clang++

CFLAGS			=		-Wall -Werror -Wextra

SRCS			=		main.cpp \
						Animal.cpp \
						Cat.cpp \
						Dog.cpp \
						Brain.cpp

OBJS			=		$(SRCS:.cpp=.o)

all				:		$(NAME)


$(NAME)		: $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -I $(HEADER) -o $(NAME)
		@echo "\033[34m[$(NAME)] Compiled\033[0m"

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