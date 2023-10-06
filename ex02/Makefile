# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 12:49:25 by bbenidar          #+#    #+#              #
#    Updated: 2023/10/06 15:59:41 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ACOUNT
CC = c++
SRC = ./tests.cpp ./Account.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS =  


all: phoneBook

phoneBook: $(OBJ)
	@$(CC) $(OBJ) -o Account && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f Account

re: fclean all

