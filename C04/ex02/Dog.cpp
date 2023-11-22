/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:46:50 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/18 15:13:46 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    std::cout << "Dog defaul constructor called" << std::endl;
    type = "Dog";
    brain = new Brain();
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
        if (this->brain)
            delete this->brain;
        this->brain = new Brain();
        for (int i = 0; i < 100; i++)
            this->brain->setIdea(i, rhs.brain->getIdea(i));
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "Dog sounds waf waf" << std::endl;
}

void Dog::setIdea(int i, std::string idea)
{
    brain->setIdea(i, idea);
}

std::string Dog::getIdea(int i) const
{
    return (brain->getIdea(i));
}