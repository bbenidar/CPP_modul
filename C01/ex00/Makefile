# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 13:13:34 by bbenidar          #+#    #+#              #
#    Updated: 2023/10/17 14:38:20 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie
CC = c++
SRC = ./main.cpp newZombie.cpp randomChump.cpp Zombie.cpp 
OBJ = $(SRC:.cpp=.o)
CFLAGS =  -g -Wall -Wextra -Werror -std=c++98


all: Zombie 

Zombie : $(OBJ)
	@$(CC) $(OBJ) -o Zombie && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f Zombie

re: fclean all
