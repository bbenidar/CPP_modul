# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 12:32:17 by bbenidar          #+#    #+#              #
#    Updated: 2024/02/22 14:28:25 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
CC = c++
SRC = ./main.cpp ./Bureaucrat.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS =    -Wall -Wextra -Werror -std=c++98
HEADER = ./Bureaucrat.hpp

all: Bureaucrat 

Bureaucrat : $(OBJ)
	@$(CC) $(OBJ) -o Bureaucrat && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp $(HEADER)
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f Bureaucrat

re: fclean all 