NAME = RPN
CC = c++
SRC = ./main.cpp  ./RPN.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS =   -Wall -Wextra -Werror -std=c++98
HEADER = ./RPN.hpp

all: RPN 

RPN : $(OBJ)
	@$(CC) $(OBJ) -o RPN && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp $(HEADER)
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f RPN

re: fclean all 