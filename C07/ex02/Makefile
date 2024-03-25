# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/19 22:05:10 by bbenidar          #+#    #+#              #
#    Updated: 2024/03/20 02:14:44 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array
CC = c++
SRC = ./main.cpp 
OBJ = $(SRC:.cpp=.o)
CFLAGS =   -g -Wall -Wextra -Werror -std=c++98
HEADER = ./Array.hpp

all: Array 

Array : $(OBJ)
	@$(CC) $(OBJ) -o Array && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp $(HEADER)
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f Array

re: fclean all 