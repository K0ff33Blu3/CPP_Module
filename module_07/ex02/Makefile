NAME = whatever

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

all:
	@$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME) && echo "\033[32m$(NAME) created.\033[0m"

clean:

fclean: clean
	@rm -f $(NAME) && echo "\033[31m$(NAME) wiped.\033[0m"

re: fclean all

.PHONY: all clean fclean re