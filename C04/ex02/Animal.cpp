/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:34:10 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/19 16:28:11 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constractor called" << std::endl;
    type = "sperm";
}

Animal::Animal(const Animal& src)
{
    std::cout<< "Animal copy constructor called" << std::endl; 
    if (this != &src)
        *this = src;
}

Animal& Animal::operator=(const Animal& rhs)
{
    std::cout << "Animal copy assingement operator" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.getType();
    }
    return (*this);
}

std::string Animal::getType() const
{
    return (type);
}

Animal::~Animal()
{
    std::cout << "Animal destructor is called" << std::endl;
}

