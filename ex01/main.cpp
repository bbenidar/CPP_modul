

#include"PhonBook.hpp"


int main() {
    bool stop;
    PhoneBook Phone_Book;
    std::string str;

    stop = true;
    while (stop) {
        std::cout << "\033[1;93m< Welcom to the 80s phonebook >\033[0m\n";
        std::cout << "the program only accept |\033[1;91m ADD \033[0m|\033[1;91m SEARCH \033[0m|\033[1;91m EXIT \033[0m|\n> ";

        std::cout << "\033[0m";

        std::getline(std::cin, str);
        if (str == "EXIT")
            stop = false;
        else if (str == "SEARCH")
            Phone_Book.search();
        else if (str == "ADD")
            Phone_Book.phoneBook();
    }
}