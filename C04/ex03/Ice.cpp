/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:31:39 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/20 16:16:16 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    std::cout << "Ice default constructor called" << std::endl;
    _type = "ice";
}

Ice::Ice(Ice const &src)
{
    std::cout<< "Ice copy constructor called" << std::endl; 
    if (this != &src)
        *this = src;
}

Ice& Ice::operator=(Ice const &rhs)
{
    std::cout << "Ice copy assingement operator" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs.getType();
    }
    return (*this);
}

AMateria *Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice destructor is called" << std::endl;
}