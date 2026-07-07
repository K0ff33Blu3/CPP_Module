NAME = RPN

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror --std=c++98 -g

SRCS = main.cpp RPN.cpp

GREEN := $(shell tput setaf 2)
RED := $(shell tput setaf 1)
RESET := $(shell tput sgr0)

all: $(NAME)

$(NAME): $(SRCS)
	@$(CXX) $(CXXFLAGS) -o $@ $^
	@echo "$(GREEN) ✔ $(NAME) compiled! $(RESET)"

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED) ✗ $(NAME) wiped! $(RESET)"

re: fclean all

.PHONY: all clean fclean re