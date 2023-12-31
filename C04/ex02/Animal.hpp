/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:34:07 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/18 23:45:13 by bbenidar         ###   ########.fr       */
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
    virtual void makeSound() const = 0;
    
    virtual ~Animal();
};
