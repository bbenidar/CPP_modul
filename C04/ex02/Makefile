# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 12:48:12 by bbenidar          #+#    #+#              #
#    Updated: 2023/11/18 13:06:52 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
CC = c++
SRC = ./main.cpp ./Animal.cpp ./Cat.cpp ./Dog.cpp ./Brain.cpp
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