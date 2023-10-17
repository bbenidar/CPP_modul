/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:48:39 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/11 19:18:12 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(std::string name_)
{
    name = name_;
}

void HumanB::attack()
{
    Weapon wpon;
    std::cout << name << "attacks with their" << wpon.getType();
}