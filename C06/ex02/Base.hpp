/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:54:57 by bbenidar          #+#    #+#             */
/*   Updated: 2024/03/04 17:59:27 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Base
{
    public:
        virtual ~Base() {}
};

class A : public Base
{
    public:
        virtual ~A() {}
};

class B : public Base
{
    public:
        virtual ~B() {}
};

class C : public Base
{
    public:
        virtual ~C() {}
};

Base * generate(void);
void identify(Base * p);
void identify(Base & p);