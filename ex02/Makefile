SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

NAME = ClapTrap

CC = c++ -Wall -Werror -Wextra -std=c++98

$(NAME): $(SRC) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	$(CC) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	@echo "No object files to clean."

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
