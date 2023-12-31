/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:48:41 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/23 17:56:27 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *weaponB;
        std::string name;
    public:
        HumanB(void);
        HumanB(std::string nameOfClub);
        void setWeapon(Weapon &weaponn);
        void attack();
};




#endif