/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:15:34 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/21 13:00:25 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(std::string getName)
{
    name = getName;
}

Zombie::Zombie(void)
{
    // std::cout << name << " is born" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << name << " is dead" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << name << ": : BraiiiiiiinnnzzzZ..." << std::endl; 
}