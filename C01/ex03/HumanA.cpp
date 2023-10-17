/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:48:33 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/17 12:20:38 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"


HumanA::HumanA(std::string nameOfClub, Weapon& weapon_) :

weapon(weapon_)
{
    name = nameOfClub;
}

void HumanA::attack() {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}