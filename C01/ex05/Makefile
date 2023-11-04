# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 15:00:27 by bbenidar          #+#    #+#              #
#    Updated: 2023/10/24 18:25:47 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl
CC = c++
SRC = ./main.cpp ./Harl.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS =  -g -Wall -Wextra -Werror -std=c++98


all: Harl 

Harl : $(OBJ)
	@$(CC) $(OBJ) -o Harl && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp Harl.hpp
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f Harl

re: fclean all