/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:37:26 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/25 18:37:50 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = src._inventory[i];
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete this->_inventory[i];
}

MateriaSource& MateriaSource::operator=(MateriaSource const &rhs)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = rhs._inventory[i];
    return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
    int i = 0;
    if (m == NULL)
        return ;
    for (i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            break ;
        }
    }
    if (i == 4)
        delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] != NULL && this->_inventory[i]->getType() == type)
            return this->_inventory[i]->clone();
    }
    return NULL;
}
