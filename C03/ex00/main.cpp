/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:54:11 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/11 15:54:28 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    // Test case 1: Create a ClapTrap named "CL4P-TP" and perform some actions
    ClapTrap claptrap1("CL4P-TP");

    claptrap1.attack("Enemy1");  // Should print an attack message
    claptrap1.takeDamage(3);     // Should print a damage message
    claptrap1.beRepaired(2);     // Should print a repair message
    claptrap1.attack("Enemy2");  // Should print another attack message
    claptrap1.takeDamage(15);    // Should print a damage message and a destruction message

    // Test case 2: Create another ClapTrap named "CL4P-TP2" and perform actions
    ClapTrap claptrap2("CL4P-TP2");

    claptrap2.attack("Enemy3");  // Should print an attack message
    claptrap2.beRepaired(5);     // Should print a repair message
    claptrap2.attack("Enemy4");  // Should print another attack message
    claptrap2.takeDamage(12);    // Should print a damage message and a destruction message

    return 0;
}