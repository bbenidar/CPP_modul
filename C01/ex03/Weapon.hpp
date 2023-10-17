/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:48:50 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/17 12:14:26 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

// Forward declaration of HumanA class
class HumanA;

class Weapon
{
private:
    std::string _type;

public:
    Weapon(std::string weaponType);
    Weapon(void);
    std::string getType();
    void setType(std::string type_);
};

#endif