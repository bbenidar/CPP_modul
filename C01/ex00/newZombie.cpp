/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:07:14 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/17 14:35:54 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie* newZombie( std::string name )
{
        Zombie* newZombies = new Zombie(name);
        return newZombies;
}