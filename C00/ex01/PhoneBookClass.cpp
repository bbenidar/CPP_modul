/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:49:33 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/04 15:53:49 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"PhonBook.hpp"

void PhoneBook::phoneBook(int *i)
{
    contact[*i] = Contact(*i);
    if(*i < 7)
        (*i)++;
    else if (*i == 7)
        *i = 0;
} 
void PhoneBook::search(){
    std :: cout << "____________________________________________________\n" ;
    std :: cout << "|            |            |            |            |\n";
    std :: cout << "|  index     |   f.name   |  l.name    |  nickname  |\n";
    std :: cout << "|____________|____________|____________|____________|\n";
    for (int i = 0; i < 8; i++)
        contact[i].serach(i);
}          

