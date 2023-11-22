/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:27:29 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/21 18:48:38 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria *_inventory[4];
        int _nbMateria;
    public:
        Character();
        Character(std::string const & name);
        Character(Character const &src);
        ~Character();
        Character &operator=(Character const &src);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
}; 