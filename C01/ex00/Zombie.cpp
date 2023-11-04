/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:15:34 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/23 17:53:14 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{}

Zombie::Zombie(std::string getName):
name(getName)
{}

Zombie::~Zombie(void)
{
    std::cout << name << " is dead" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << name << ": : BraiiiiiiinnnzzzZ..." << std::endl; 
}