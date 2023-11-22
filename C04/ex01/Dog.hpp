/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:45:48 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/18 13:24:55 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
  private:
    Brain* brain;
  public:
    Dog();
    Dog(const Dog& src);
    Dog &operator=(const Dog& rhs);
    ~Dog();
    void makeSound() const;
    void setIdea(int i, std::string idea);
    std::string getIdea(int i) const;
    
};
 