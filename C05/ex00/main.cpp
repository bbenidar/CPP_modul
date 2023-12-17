/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:32:14 by bbenidar          #+#    #+#             */
/*   Updated: 2023/12/16 11:03:16 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include<iostream>

int main()
{
    try
    {
      Bureaucrat b;
        std::cout << b << std::endl;
        b.incrementGrade();
        std::cout << b.getGrade() << std::endl;
        b.decrementGrade();
        std::cout << b.getGrade() << std::endl;
        b.decrementGrade();
        std::cout << b.getGrade() << std::endl;
        b.decrementGrade();
        std::cout << b.getGrade() << std::endl;
        b.decrementGrade();
        std::cout << b.getGrade() << std::endl;

        
      
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "---------------------" << std::endl;
    
}