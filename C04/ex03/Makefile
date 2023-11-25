# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 16:29:31 by bbenidar          #+#    #+#              #
#    Updated: 2023/11/25 22:12:58 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AMateria
CC = c++
SRC = ./main.cpp ./Ice.cpp ./Cure.cpp ./AMateria.cpp  ./Character.cpp ./MateriaSource.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS =   -g -Wall -Wextra -Werror -std=c++98
HEADER = ./Ice.hpp ./Cure.hpp ./AMateria.hpp ./ICharacter.hpp ./Character.hpp ./IMateriaSource.hpp ./MateriaSource.hpp

all: Acharacter 

Acharacter : $(OBJ)
	@$(CC) $(OBJ) -o Acharacter && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp $(HEADER)
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f Acharacter

re: fclean all