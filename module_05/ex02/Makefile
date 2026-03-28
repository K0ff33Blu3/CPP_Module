NAME = ManyForms

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $^
	@echo -e "\033[32m✔ $(NAME) created\033[0m"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo -e "\033[90m• Compiled $<\033[0m"

clean:
	@rm -f $(OBJ)
	@echo -e "\033[33m✘ Object files removed\033[0m"
	@rm -f *_shrubbery
	@echo -e "\033[33m✘ Shrubbery files removed\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo -e "\033[33m✘ $(NAME) removed\033[0m" 

re: fclean all