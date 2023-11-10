/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:00:37 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/10 11:18:45 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
    return ;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &rhs)
        this->value = rhs.getRawBits();
    return (*this);
}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = n << fractional_bits;
    return ;
}  

Fixed::Fixed(const float n)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(n * (1 << fractional_bits));
    return ;
}

void	Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
    return ;
}

int		Fixed::getRawBits(void) const
{
    return (this->value);
}

float  Fixed::toFloat(void) const
{
    return ((float)this->value / (1 << fractional_bits));
}

int    Fixed::toInt(void) const
{
    return (this->value / (1 << fractional_bits));
}

std::ostream &operator<<(std::ostream& os, const Fixed& cal)
{
    os << cal.toFloat();
    return (os);
}
