/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:49:20 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/04 15:58:37 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include"PhonBook.hpp"


int main() {
    bool stop;
    PhoneBook Phone_Book;
    std::string str;
    int i = 0;
    int Added_flags = 1;

    stop = true;
    while (stop) {
        std::cout << "\033[1;93m< Welcom to the 80s phonebook >\033[0m\n";
        std::cout << "the program only accept |\033[1;91m ADD \033[0m|\033[1;91m SEARCH \033[0m|\033[1;91m EXIT \033[0m|\n> ";

        std::cout << "\033[0m";

        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(0);
        if (str == "EXIT")
            stop = false;
        else if (str == "SEARCH" && !Added_flags)
            Phone_Book.search();
        else if (str == "SEARCH" && Added_flags)
            std::cout << "Contact list is empty !\n";
        else if (str == "ADD")
        {
            Added_flags = 0;
            Phone_Book.phoneBook(&i);
        }
    }
}