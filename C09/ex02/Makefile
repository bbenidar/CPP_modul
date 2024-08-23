NAME = PmergeMe
CC = c++
SRC = ./main.cpp  ./PmergeMe.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS =   -Wall -Wextra -Werror -std=c++98
HEADER = ./PmergeMe.hpp

all: PmergeMe 

PmergeMe : $(OBJ)
	@$(CC) $(OBJ) -o PmergeMe && echo  "\033[1;92mCompilation successful\033[0m"

%.o: %.cpp $(HEADER)
	@echo  "\033[1;93mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f PmergeMe

re: fclean all 