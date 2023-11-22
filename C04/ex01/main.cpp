/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:34:13 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/18 15:14:39 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Cat* cat = new Cat();
    Dog* dog = new Dog();

    cat->setIdea(0, "I am a cat");
    cat->setIdea(1, "I am a cat 1");
    cat->setIdea(2, "I am a cat 2");

    dog->setIdea(0, "I am a dog");
    dog->setIdea(1, "I am a dog 1");
    dog->setIdea(2, "I am a dog 2");

    std::cout << " \033[0;32m--------------------------------------- \033[0;37m" <<std::endl;
    Cat* cat2 = new Cat(*cat);
    std::cout << cat2->getIdea(0) << std::endl;
    std::cout << cat2->getIdea(1) << std::endl;
    std::cout << cat2->getIdea(2) << std::endl;

    std::cout << " \033[0;32m--------------------------------------- \033[0;37m" <<std::endl;
    Dog* dog2 = new Dog(*dog);
    std::cout << dog2->getIdea(0) << std::endl;
    std::cout << dog2->getIdea(1) << std::endl;
    std::cout << dog2->getIdea(2) << std::endl;
    dog2 = new Dog(*dog);
    delete cat;
    delete dog; 
    delete cat2;
    delete dog2;
    while(1);
}