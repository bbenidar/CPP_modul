/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:48:39 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/26 14:25:25 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(void) : weaponB(NULL) {}

HumanB::HumanB(std::string nameOfClub) : weaponB(NULL)
{
    name = nameOfClub;
}

void HumanB::setWeapon(Weapon &weaponn)
{
    weaponB = &weaponn;
}

void HumanB::attack()
{
    if ((name == "" || name == "") || weaponB == NULL)
        std::cout << name << " attacks with their " << std::endl;
    else
        std::cout << name << " attacks with their " << weaponB->getType() << std::endl;
}