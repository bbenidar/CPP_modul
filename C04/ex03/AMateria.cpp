/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:57:26 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/21 18:54:43 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    std::cout << "AMateria default constructor called" << std::endl;
    this->_type = type;
}

std::string const & AMateria::getType() const
{
    return (_type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria::AMateria()
{
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &src)
{
    std::cout<< "AMateria copy constructor called" << std::endl; 
    if (this != &src)
        *this = src;
}

AMateria& AMateria::operator=(AMateria const &rhs)
{
    std::cout << "AMateria copy assingement operator" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs.getType();
    }
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor is called" << std::endl;
}



