# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/11 17:46:31 by bbenidar          #+#    #+#              #
#    Updated: 2023/10/17 12:19:39 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BRAIN
CC = c++
SRC = ./main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS =  -g -Wall -Wextra -Werror -std=c++98


all: BRAIN 

BRAIN : $(OBJ)
	@$(CC) $(OBJ) -o BRAIN && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f BRAIN

re: fclean all
