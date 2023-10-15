/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:10:23 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/06 15:31:55 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include"PhonBook.hpp"
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
        void serach(int i);
};

#endif