/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:48:50 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/01 19:09:37 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class HumanA;
class HumanB; //n avoidi circular dependencies

class Weapon
{
private:
    std::string c_type;

public:
    Weapon(std::string weaponType);
    Weapon(void);
    const std::string& getType();
    void setType(std::string type_);
};

#endif