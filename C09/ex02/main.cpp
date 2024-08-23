/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:13:05 by bbenidar          #+#    #+#             */
/*   Updated: 2024/08/16 18:01:43 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// PmergeMe
#include <iostream>
#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "Usage: ./PmergMe <number>" << std::endl;
        return 1;
    }
    PmergeMe p(av);

    p.beforePrintVec();
    p.mergeSortVec();
    p.afterPrintVec();
    p.printTimeofVec(ac);

    p.mergeSortDeque();
    p.printTimeofDeque(ac);
   
    return 0;
}