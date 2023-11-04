# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 13:13:34 by bbenidar          #+#    #+#              #
#    Updated: 2023/10/24 18:19:55 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ZombieHord
CC = c++
SRC = ./main.cpp zombieHorde.cpp Zombie.cpp 

OBJ = $(SRC:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(CFLAGS) -o $@ $(OBJ)

%.o: %.cpp Zombie.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all