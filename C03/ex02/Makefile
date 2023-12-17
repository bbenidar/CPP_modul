# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/11 15:51:26 by bbenidar          #+#    #+#              #
#    Updated: 2023/11/13 15:33:55 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
CC = c++
SRC = ./main.cpp ./ClapTrap.cpp ./ScavTrap.cpp ./FragTrap.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS =   -Wall -Wextra -Werror -std=c++98


all: ClapTrap 

ClapTrap : $(OBJ)
	@$(CC) $(OBJ) -o ClapTrap && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f ClapTrap

re: fclean all