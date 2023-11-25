/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:34:07 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/22 17:21:22 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

class Animal
{
    protected:
        std::string type;
    public:
    Animal();
    Animal(const Animal& src);
    Animal& operator=(const Animal& rhs);
    std::string getType() const;
    virtual void makeSound() const;
    
    virtual ~Animal();
};
