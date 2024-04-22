# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 01:43:29 by bbenidar          #+#    #+#              #
#    Updated: 2024/04/03 01:41:44 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MutantStack
CC = c++
SRC = ./main.cpp 
OBJ = $(SRC:.cpp=.o)
CFLAGS =   -g -Wall -Wextra -Werror -std=c++98
HEADER = ./MutantStack.hpp

all: MutantStack 

MutantStack : $(OBJ)
	@$(CC) $(OBJ) -o MutantStack && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp $(HEADER)
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f MutantStack

re: fclean all 