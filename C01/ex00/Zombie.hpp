/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:13:54 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/17 14:33:28 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>



class Zombie
{
	private:
		std::string name;
	
	public:
		Zombie(std::string getName);
		void announce( void );       
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif