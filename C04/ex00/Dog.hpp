/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:45:48 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/17 12:54:23 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog: public Animal{
      public:
    Dog();
    Dog(const Dog& src);
    Dog &operator=(const Dog& rhs);
    ~Dog();
    void makeSound() const;
    
};
 