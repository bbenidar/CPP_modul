/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:54:11 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/13 15:42:29 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap clap("Clap");
    ScavTrap scav("Scav");
    ScavTrap scav2(scav);
    ScavTrap scav3;
    scav3 = scav2;
    clap.attack("Clap");
    scav.attack("Scav");
    scav2.attack("Scav2");
    scav3.attack("Scav3");
    scav.beRepaired(5);
    scav.guardGate();
    return (0);
}