/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 18:22:59 by bbenidar          #+#    #+#             */
/*   Updated: 2024/08/17 12:31:05 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// RPN Calculator
#include <iostream>
#include "RPN.hpp"



int main(int ac ,char **av)
{

    if (ac != 2)
    {
        std::cout << "Error: no arguments" << std::endl;
        return 1;
    }
    RPN rpn(av[1]);
    
    
    return 0;
}