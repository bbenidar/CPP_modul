# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 12:48:54 by bbenidar          #+#    #+#              #
#    Updated: 2023/10/04 16:34:43 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = MEGAPHONE
CC = c++
SRC = ./megaphone.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98


all: megaphone

megaphone: $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ)  -o megaphone && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f megaphone

re: fclean all

