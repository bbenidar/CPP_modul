/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:13:39 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/21 13:07:30 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"


int main ()
{
	Zombie *zombie;
	
	zombie = newZombie("brahim");
	zombie->announce();
	
	randomChump("faaz");
	delete zombie;

	return 0;
}