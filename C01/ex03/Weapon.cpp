/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:48:48 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/17 12:13:51 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp" // Include the HumanA header here

std::string Weapon::getType()
{
    return _type;
}

Weapon::Weapon(std::string weaponType) : _type(weaponType) {}