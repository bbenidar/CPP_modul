# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 01:43:29 by bbenidar          #+#    #+#              #
#    Updated: 2024/03/25 01:57:12 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span
CC = c++
SRC = ./main.cpp Span.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS =   -g -Wall -Wextra -Werror -std=c++98
HEADER = ./Span.hpp

all: Span 

Span : $(OBJ)
	@$(CC) $(OBJ) -o Span && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp $(HEADER)
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f Span

re: fclean all 