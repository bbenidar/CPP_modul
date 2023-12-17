/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:15:15 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/16 17:17:01 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap Default constructor called" << std::endl;
    this->HitPoints = 100;
    this->energPoint = 100;
    this->attackDamage = 30;
    return ;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap Constructor called" << std::endl;
    this->name = name;
    this->HitPoints = 100;
    this->energPoint = 100;
    this->attackDamage = 30;
    return ;
}

FragTrap::FragTrap(const FragTrap &src)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    if(this != &src)
        *this = src;
    return ;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap Destructor called" << std::endl;
    return ;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
    std::cout << "FragTrap Assignation operator called" << std::endl;
    if(this != &rhs)
    {
        this->name = rhs.name;
        this->HitPoints = rhs.HitPoints;
        this->energPoint = rhs.energPoint;
        this->attackDamage = rhs.attackDamage;
    }
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " want high fives!" << std::endl;
}