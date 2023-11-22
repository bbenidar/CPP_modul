/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:46:28 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/17 12:54:12 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat defaul constructor called" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat& src)
{
    std::cout << "Cat copy constructor " << std::endl;
    if (this != &src)
    {
        *this = src;
    }
}

Cat &Cat::operator=(const Cat& rhs)
{
    std::cout << "Cat copy assingement operator" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.getType();
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat sounds myew myew" << std::endl;
}