/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:13:39 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/31 14:45:51 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main ()
{
	Zombie *zombie;
	
	zombie = zombieHorde(10, "brahim");
	if(zombie == NULL)
		return 1;
	for(int i = 0; i < 10; i++)
		zombie->announce();
	
	delete[] zombie;
	return 0;
}