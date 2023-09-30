NAME = PHONE_BOOK
CC = clang++
SRC = ./main.cpp  ./ContactClass.cpp ./PhoneBookClass.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror


all: phoneBook

phoneBook: $(OBJ)
	@$(CC) $(OBJ) -o phone_book && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f phone_book

re: fclean all

