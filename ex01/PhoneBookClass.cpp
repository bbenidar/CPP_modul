
#include"PhonBook.hpp"

void PhoneBook::phoneBook()
{
    contact[i] = Contact(i);
    if(i < 7)
        i++;
} 
void PhoneBook::search(){
    std :: cout << "____________________________________________________\n" ;
    std :: cout << "|            |            |            |            |\n";
    std :: cout << "|  f.name    |  l.name    |  nickname  |   phone    |\n";
    std :: cout << "|____________|____________|____________|____________|\n";
    for (int i = 0; i < 8; i++)
        contact[i].serach();
}          

