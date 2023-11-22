/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:34:13 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/18 23:29:13 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();//  will output the dog sound!
    meta->makeSound(); // will output the animal sound!
    delete meta;
    delete j;
    delete i;
    std::cout << " \033[0;32m--------------------------------------- \033[0;37m" <<std::endl;

    const WrongAnimal* i2 = new WrongCat();
    std::cout << i2->getType() << " " << std::endl;
    i2->makeSound(); //will output the cat sound!
    return 0;
}