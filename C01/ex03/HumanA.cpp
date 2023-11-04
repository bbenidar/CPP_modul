/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:48:33 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/26 10:17:40 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"


HumanA::HumanA(std::string nameOfClub, Weapon& weapon_) :
weaponA(weapon_),
name(nameOfClub)
{}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weaponA.getType() << std::endl;
}