# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/17 23:12:42 by bbenidar          #+#    #+#              #
#    Updated: 2024/03/04 17:23:51 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  Serializer
CC = c++
SRC = ./main.cpp ./Serialize.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS =   -g -Wall -Wextra -Werror -std=c++98
HEADER = ./Serialize.hpp

all:  Serializer 

 Serializer : $(OBJ)
	@$(CC) $(OBJ) -o  Serializer && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp $(HEADER)
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f  Serializer

re: fclean all 