NAME			=		Phonebook

HEADER			=		class.hpp

CC				=		@clang++

CFLAGS			=		-Wall -Wextra -Werror

SRCS			=		Phonebook.cpp \
						class.cpp \

OBJS			=		$(SRCS:.cpp=.o)

all				:		$(NAME)


$(NAME)		: $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -I $(HEADER) -o $(NAME)
		@echo "\033[33m[PhoneBook] \033[34mCompiled\033[0m"

%.o: %.cpp $(HEADER)
		$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER)

clean		:
		@echo "\033[33m[PhoneBook] \033[32mClean\033[0m"
		@rm -f $(OBJS)

fclean		: clean
		@rm -f $(NAME)

re			:		fclean all

.PHONY: all bonus clean fclean re