/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:15:34 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/17 14:39:56 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string getName):
name(getName)
{}

void Zombie::announce( void )
{
    std::cout << name << ": : BraiiiiiiinnnzzzZ..." << std::endl; 
}