# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 12:49:25 by bbenidar          #+#    #+#              #
#    Updated: 2023/10/07 19:53:36 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PHONE_BOOK
CC = g++
SRC = main.cpp ContactClass.cpp PhoneBookClass.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS = -g -Wall -Wextra -Werror -std=c++98
HEADERS = PhoneBook.hpp Contact.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

%.o: %.cpp PhoneBook.hpp Contact.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all