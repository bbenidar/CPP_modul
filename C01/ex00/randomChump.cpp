/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:26:13 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/17 14:37:04 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

void randomChump( std::string name )
{
    Zombie zomb(name);
    zomb.announce();
}