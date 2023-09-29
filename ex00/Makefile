NAME = MEGAPHONE
CC = clang++
SRC = ./megaphone.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror


all: megaphone

megaphone: $(OBJ)
	@$(CC) $(OBJ) -o megaphone && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f megaphone

re: fclean all

