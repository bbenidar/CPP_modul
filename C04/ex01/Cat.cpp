/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:46:28 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/18 13:51:32 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat defaul constructor called" << std::endl;
    type = "Cat";
    brain = new Brain();
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
        this->brain = new Brain();
        for(int i = 0; i < 100; i++)
            this->brain->setIdea(i, rhs.brain->getIdea(i));
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << "Cat sounds myew myew" << std::endl;
}

void Cat::setIdea(int i, std::string idea)
{
    brain->setIdea(i, idea);
}

std::string Cat::getIdea(int i) const
{
    return (brain->getIdea(i));
}
