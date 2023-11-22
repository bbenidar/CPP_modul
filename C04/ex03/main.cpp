/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:29:35 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/22 16:54:08 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    AMateria* tmp2;
    tmp2 = src->createMateria("ice");
    AMateria* tmp3;
    tmp3 = src->createMateria("ice");
    AMateria* tmp4;
    tmp4 = src->createMateria("ice");
    AMateria* tmp5;
    tmp5 = src->createMateria("ice");
    me->equip(tmp2);
    me->equip(tmp);
    me->equip(tmp3);
    me->equip(tmp4);
    me->equip(tmp5);

    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    while(1);
    return 0;
}