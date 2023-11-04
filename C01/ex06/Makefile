# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 15:00:27 by bbenidar          #+#    #+#              #
#    Updated: 2023/10/24 18:30:38 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter
CC = c++
SRC = ./main.cpp ./Harl.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS =  -g -Wall -Wextra -Werror -std=c++98


all: harlFilter 

harlFilter : $(OBJ)
	@$(CC) $(OBJ) -o harlFilter && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp Harl.hpp
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f harlFilter

re: fclean all
