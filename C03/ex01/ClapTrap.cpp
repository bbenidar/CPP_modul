/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:33:30 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/15 15:44:55 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
    this->HitPoints = 10;
    this->energPoint = 10;
    this->attackDamage = 0;
    return ;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap Constructor called" << std::endl;
    this->name = name;
    this->HitPoints = 10;
    this->energPoint = 10;
    this->attackDamage = 0;
    return ;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    if(this != &src)
        *this = src;
    return ;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap Destructor called" << std::endl;
    return ;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
    std::cout << "ClapTrap Assignation operator called" << std::endl;
    if(this != &rhs)
    {
        this->name = rhs.name;
        this->HitPoints = rhs.HitPoints;
        this->energPoint = rhs.energPoint;
        this->attackDamage = rhs.attackDamage;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if(HitPoints > 0 && energPoint > 0)
   {
        std::cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        energPoint--;
    }
    else if( energPoint <= 0)
        std::cout << "ClapTrap " << this->name << " has no energie points!" << std::endl;
    else
        std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(HitPoints > 0 && energPoint > 0)
    {
        std::cout << "ClapTrap " << this->name << " take damage " << amount << " points of damage!" << std::endl;
        this->HitPoints -= amount;
    }
    else
        std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (HitPoints > 0 && energPoint > 0)
    {
        std::cout << "ClapTrap " << this->name << " be repaired " << amount << " points of damage!" << std::endl;
        this->HitPoints += amount;
    }
    else
        std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
    energPoint--;
}
