NAME = convert

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ScalarConverter.cpp

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME) && echo "\033[32m✔ $(NAME) created\033[0m"

clean:

fclean: clean
	@rm -rf $(NAME) && echo "\033[33m✘ $(NAME) removed\033[0m" 

re: fclean all

.PHONY: all clean fclean re
