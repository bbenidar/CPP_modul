#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include<iostream>
#include<cstring>
#include<iomanip>

class Contact
{
    private:
    std::string  FirstName;
    std::string  LastName;
    std::string  NickName;
    std::string  PhoneNum;
    std::string  DarkSecret;
    public:
        Contact(){}

        Contact(int i);
        void serach();
};

class PhoneBook
{
    private :
    Contact contact[8];
    public :
    int i  = 0;
    void phoneBook(); 
    void search();          
};


#endif