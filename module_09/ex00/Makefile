NAME = btc

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror --std=c++98 -g

SRCS = main.cpp BitcoinExchange.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@$(CXX) $(CXXFLAGS) -o $@ $^
	@echo "\033[32m ✔ $(NAME) compiled!\033[0m"

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)
	@echo "\033[31m ✗ $(NAME) wiped!\033[0m"

re: fclean all

.PHONY: all clean fclean re