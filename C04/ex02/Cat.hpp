/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:48:26 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/18 13:11:04 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
    private :
        Brain* brain;
    public:
    Cat();
    Cat(const Cat& src);
    Cat &operator=(const Cat& rhs);
    ~Cat();
    void makeSound() const;
    void setIdea(int i, std::string idea);
    std::string getIdea(int i) const;
};