SRCS = main.cpp

INCS = easyfind.hpp

NAME = easyfind

CC = c++

FLAGS = -Wall -Wextra -Werror  -std=c++98

all: $(NAME)

$(NAME): $(SRCS) $(INCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
