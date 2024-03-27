# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 01:28:58 by bbenidar          #+#    #+#              #
#    Updated: 2024/03/25 01:42:21 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind
CC = c++
SRC = ./main.cpp 
OBJ = $(SRC:.cpp=.o)
CFLAGS =   -g -Wall -Wextra -Werror -std=c++98
HEADER = ./easyfind.hpp

all: easyfind 

easyfind : $(OBJ)
	@$(CC) $(OBJ) -o easyfind && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp $(HEADER)
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f easyfind

re: fclean all 