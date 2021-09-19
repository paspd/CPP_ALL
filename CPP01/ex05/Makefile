NAME			=		Karen

HEADER			=		Karen.hpp

CC				=		clang++

CFLAGS			=		-Wall -Werror -Wextra

SRCS			=		main.cpp \
						Karen.cpp

OBJS			=		$(SRCS:.cpp=.o)

all				:		$(NAME)


$(NAME)		: $(OBJS)
		@$(CC) $(CFLAGS) $(OBJS) -I $(HEADER) -o $(NAME)
		@echo "\033[34m[Karen] Compiled\033[0m"

%.o: %.cpp $(HEADER)
		@$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

clean		:
		@echo "\033[32m[Karen] Clean\033[0m"
		@rm -f $(OBJS)

fclean		:
		@echo "\033[32m[Karen] Clean\033[0m"
		@rm -f $(OBJS)
		@rm -f $(NAME)

re			:		fclean all

.PHONY: all bonus clean fclean re