# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 17:56:15 by bbenidar          #+#    #+#              #
#    Updated: 2024/03/04 17:56:18 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  Base
CC = c++
SRC = ./main.cpp ./Base.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS =   -g -Wall -Wextra -Werror -std=c++98
HEADER = ./Base.hpp

all:  Base 

 Base : $(OBJ)
	@$(CC) $(OBJ) -o  Base && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp $(HEADER)
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f  Base

re: fclean all 