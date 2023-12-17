# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 12:32:17 by bbenidar          #+#    #+#              #
#    Updated: 2023/12/16 22:24:32 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
CC = c++
SRC = ./main.cpp ./Bureaucrat.cpp ./AForm.cpp ./ShrubberyCreationForm.cpp 
OBJ = $(SRC:.cpp=.o)
CFLAGS =   -g -Wall -Wextra -Werror -std=c++98
HEADER = ./Bureaucrat.hpp ./AForm.hpp

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