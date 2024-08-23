# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/19 19:54:59 by bbenidar          #+#    #+#              #
#    Updated: 2024/08/21 15:33:52 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc
CC = c++
SRC = ./main.cpp  ./BitcoinExchange.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS =  -Wall -Wextra -Werror -std=c++98
HEADER = ./BitcoinExchange.hpp

all: btc 

btc : $(OBJ)
	@$(CC) $(OBJ) -o btc && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp $(HEADER)
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f btc

re: fclean all 
