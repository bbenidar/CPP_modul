# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 16:29:31 by bbenidar          #+#    #+#              #
#    Updated: 2023/11/21 18:52:41 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AMateria
CC = c++
SRC = ./main.cpp ./Ice.cpp ./Cure.cpp ./AMateria.cpp  ./Character.cpp ./MateriaSource.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS =   -Wall -Wextra -Werror -std=c++98


all: Animal 

Animal : $(OBJ)
	@$(CC) $(OBJ) -o Animal && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp Animal.hpp Dog.hpp Cat.hpp
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f Animal

re: fclean all