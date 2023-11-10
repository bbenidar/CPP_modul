# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/05 22:00:47 by bbenidar          #+#    #+#              #
#    Updated: 2023/11/05 22:09:50 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ORTHODOXFORM
CC = c++
SRC = ./main.cpp ./Fixed.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS =  -g -Wall -Wextra -Werror -std=c++98


all: ORTHODOXFORM 

ORTHODOXFORM : $(OBJ)
	@$(CC) $(OBJ) -o ORTHODOXFORM && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp Fixed.hpp
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f ORTHODOXFORM

re: fclean all
