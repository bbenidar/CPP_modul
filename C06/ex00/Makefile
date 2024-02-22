# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/17 23:12:42 by bbenidar          #+#    #+#              #
#    Updated: 2023/12/17 23:16:10 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScalarConverter
CC = c++
SRC = ./main.cpp ./ScalarConverte.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS =   -g -Wall -Wextra -Werror -std=c++98
HEADER = ./ScalarConverte.hpp

all: ScalarConverter 

ScalarConverter : $(OBJ)
	@$(CC) $(OBJ) -o ScalarConverter && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp $(HEADER)
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f ScalarConverter

re: fclean all 