# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taya <taya@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/09 10:36:53 by taya              #+#    #+#              #
#    Updated: 2026/01/09 10:36:54 by taya             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
SRC = ClapTrap.cpp  main.cpp
OBJ = $(SRC:.cpp=.o)
CPPC = c++
CPPFLAG = -Wall -Wextra -Werror -std=c++98


all: $(NAME)


$(NAME): $(OBJ)
	$(CPPC) $(CPPFLAG) -o $(NAME) $(OBJ)

%.o: %.cpp ClapTrap.hpp
	$(CPPC) $(CPPFLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re