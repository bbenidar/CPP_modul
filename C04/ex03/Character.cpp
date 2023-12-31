/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:58:04 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/25 18:08:04 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(std::string const & name)
{
    this->_name = name;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(Character const &src)
{
    this->_name = src._name;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = src._inventory[i];
}

Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] != NULL)
            delete this->_inventory[i];
    }
}

Character& Character::operator=(Character const &rhs)
{
    if (this != &rhs) {
        this->_name = rhs._name;

        for (int i = 0; i < 4; i++)
        {
            if (this->_inventory[i])
                delete this->_inventory[i];
        }
        for (int i = 0; i < 4; i++)
        {
            if (rhs._inventory[i])
                this->_inventory[i] = rhs._inventory[i]->clone();
        }
    }
    return *this;
}

std::string const & Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
			break ;
		}
		else if (i == 3)
			std::cout << "Inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && this->_inventory[idx]) {
		for (int i = 0; i < 4; i++)
			if (!this->_unequiped[i]) {
				this->_unequiped[i] = this->_inventory[idx];
				break ;
			}
		this->_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL)
        this->_inventory[idx]->use(target);
}
