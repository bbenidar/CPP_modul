/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonBook.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:49:29 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/06 15:32:32 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include<iostream>
#include<cstring>


#include<iomanip>
#include "Contact.hpp"

class PhoneBook
{
    private :
    Contact contact[8];
    public :
    void phoneBook(int *i); 
    void search();          
};


#endif