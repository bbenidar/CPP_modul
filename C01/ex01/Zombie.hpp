/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:13:54 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/24 18:20:12 by bbenidar         ###   ########.fr       */
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
		void setName(std::string name);
		Zombie(void);
		~Zombie(void);
		void announce( void );       
};

Zombie* zombieHorde( int N, std::string name );

#endif 