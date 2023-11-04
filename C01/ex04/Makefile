# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 17:35:38 by bbenidar          #+#    #+#              #
#    Updated: 2023/10/24 18:24:59 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = SIDEisforLosers
CC = c++
SRC = ./main.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS =  -g -Wall -Wextra -Werror -std=c++98


all: SIDEisforLosers 

SIDEisforLosers : $(OBJ)
	@$(CC) $(OBJ) -o SIDEisforLosers && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f SIDEisforLosers

re: fclean all