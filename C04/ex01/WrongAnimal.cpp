/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:05:01 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/18 23:10:32 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constractor called" << std::endl;
    type = "sperm";
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
    std::cout<< "WrongAnimal copy constructor called" << std::endl; 
    if (this != &src)
        *this = src;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
    std::cout << "WrongAnimal copy assingement operator" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.getType();
    }
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return (type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor is called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "pje9 pje9 " << std::endl;
}