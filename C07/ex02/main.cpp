/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 22:42:08 by bbenidar          #+#    #+#             */
/*   Updated: 2024/03/27 00:46:53 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

#define MAX_VAL 750



int main()
{
        //empty array
    Array<int> empty;
    //empty array size
    std::cout << "empty.size() = " << empty.size() << std::endl;
    Array<int> a(5);
    Array<int> b(5);
    Array<int> c(5);
    //[] operator
    a[6] = 42;
    for (unsigned int i = 0; i < a.size(); i++)
    {
        a[i] = i;
        b[i] = i + 1;
        c[i] = i + 2;
    } 
    for (unsigned int i = 0; i < a.size(); i++)
    {
        std::cout << "a[" << i << "] = " << a[i] << std::endl;
        std::cout << "b[" << i << "] = " << b[i] << std::endl;
        std::cout << "c[" << i << "] = " << c[i] << std::endl;
    }
}