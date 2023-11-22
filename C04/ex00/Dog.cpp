/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:46:50 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/17 12:54:29 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    std::cout << "Dog defaul constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog& src)
{
    std::cout << "Dog copy constructor " << std::endl;
    if (this != &src)
    {
        *this = src;
    }
}

Dog &Dog::operator=(const Dog& rhs)
{
    std::cout << "Dog copy assingement operator" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.getType();
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog sounds waf waf" << std::endl;
}