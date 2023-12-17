/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:27:29 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/14 15:40:06 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->name = "ScavTrap";
    this->HitPoints = 100;
    this->energPoint = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->name = name;
    this->HitPoints = 100;
    this->energPoint = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& src): ClapTrap(src)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->name = rhs.name;
        this->HitPoints = rhs.HitPoints;
        this->energPoint = rhs.energPoint;
        this->attackDamage = rhs.attackDamage;
    }
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if(HitPoints > 0 && energPoint > 0)
   {
        std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        energPoint--;
    }
    else if( energPoint <= 0)
        std::cout << "ScavTrap " << this->name << " has no energie points!" << std::endl;
    else
        std::cout << "ScavTrap " << this->name << " is already dead!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " has enterred in Gate keeper mode" << std::endl;
}

