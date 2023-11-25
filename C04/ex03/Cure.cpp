/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:32:07 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/24 18:04:27 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    std::cout << "Cure default constructor called" << std::endl;
    _type = "cure";
}

Cure::Cure(Cure const &src)
{
    std::cout<< "Cure copy constructor called" << std::endl;
    
    if (this != &src)
        *this = src;
}

Cure& Cure::operator=(Cure const &rhs)
{
    std::cout << "Cure copy assingement operator" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs.getType();
    }
    return (*this);
}

AMateria *Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure destructor is called" << std::endl;
}


