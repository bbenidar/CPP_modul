
#include"PhonBook.hpp"
 
Contact::Contact(int i)
{
    (void)i;
    std::cout << "insert first name :\n> ";
    std::cin >> FirstName;
    std::cout << "insert last name :\n> ";
    std::cin >> LastName;
    std::cout << "insert nickname :\n> ";
    std::cin >> NickName;
    std::cout << "insert Phone number :\n> ";
    std::cin >> PhoneNum;
}

void Contact::serach()
{
    std::cout << "|";
    std::cout << std::setw(12) << std::left << (FirstName.length() <= 10 ? FirstName : FirstName.substr(0, 9) + "...");
    std::cout << "|";
    std::cout << std::setw(12) << std::left << (LastName.length() <= 10 ? LastName : LastName.substr(0, 9) + "...");
    std::cout << "|";
    std::cout << std::setw(12) << std::left << (NickName.length() <= 10 ? NickName : NickName.substr(0, 9) + "...");
    std::cout << "|";
    std::cout << std::setw(12) << std::left << (PhoneNum.length() <= 10 ? PhoneNum : PhoneNum.substr(0, 9) + "...");
    std::cout << "|\n";
    std :: cout << "|____________|____________|____________|____________|\n" ;
}