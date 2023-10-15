/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:49:10 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/04 15:55:17 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhonBook.hpp"
 
Contact::Contact(int i)
{
    (void)i;
    while(FirstName.size() == 0)
    {
        std::cout << "insert first name :\n> ";
        std::getline(std::cin, FirstName);
        if (std::cin.eof())
            exit(0);
    }
    while(LastName.size() == 0)
    {
        std::cout << "insert last name :\n> ";
        std::getline(std::cin, LastName);
        if (std::cin.eof())
            exit(0);
    }
    while(NickName.size() == 0)
    {
        std::cout << "insert nickname :\n> ";
        std::getline(std::cin, NickName);
        if (std::cin.eof())
            exit(0);
    }
    while(PhoneNum.size() == 0)
    {
        std::cout << "insert Phone number :\n> ";
        std::getline(std::cin, PhoneNum);
        if (std::cin.eof())
            exit(0);
    }

}
//

void Contact::serach(int i)
{
    std::cout << "|";
    std::cout << std::setw(12)  << i;
    std::cout << "|";
    std::cout << std::setw(12) << (FirstName.length() <= 10 ? FirstName : FirstName.substr(0, 9) + ".");
    std::cout << "|";
    std::cout << std::setw(12)  << (LastName.length() <= 10 ? LastName : LastName.substr(0, 9) + ".");
    std::cout << "|";
    std::cout << std::setw(12)  << (NickName.length() <= 10 ? NickName : NickName.substr(0, 9) + ".");
    std::cout << "|\n";
    std :: cout << "|____________|____________|____________|____________|\n" ;
}