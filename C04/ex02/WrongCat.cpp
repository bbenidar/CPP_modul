/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:03:32 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/18 23:27:40 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat defaul constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& src)
{
    std::cout << "WrongCat copy constructor " << std::endl;
    if (this != &src)
    {
        *this = src;
    }
}

WrongCat &WrongCat::operator=(const WrongCat& rhs)
{
    std::cout << "WrongCat copy assingement operator" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.getType();
    }
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sounds myew myew" << std::endl;
}