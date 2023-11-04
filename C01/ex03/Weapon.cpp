/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:48:48 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/21 14:46:02 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

const std::string& Weapon::getType()
{
    return c_type;
}

void Weapon::setType(std::string type_)
{
    c_type = type_;
}

Weapon::Weapon(std::string weaponType)
{
    c_type=weaponType;
}

Weapon::Weapon()
{}