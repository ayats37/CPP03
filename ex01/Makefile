# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taya <taya@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/09 10:37:07 by taya              #+#    #+#              #
#    Updated: 2026/01/09 10:37:08 by taya             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap
SRC = ClapTrap.cpp ScavTrap.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
CPPC = c++
CPPFLAG = -Wall -Wextra -Werror -std=c++98


all: $(NAME)


$(NAME): $(OBJ)
	$(CPPC) $(CPPFLAG) -o $(NAME) $(OBJ)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp
	$(CPPC) $(CPPFLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re