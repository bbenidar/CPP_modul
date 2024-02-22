/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:32:14 by bbenidar          #+#    #+#             */
/*   Updated: 2024/02/22 14:34:33 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include<iostream>

int main()
{
    try {
        Bureaucrat b("L3arbi", 160);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "-------------------------------------------------" << std::endl;
    {
    
        try
        {
            Bureaucrat b("L3arbi", 1);
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
    }
    std::cout << "-------------------------------------------------" << std::endl;
    {
        try
        {
            Bureaucrat b("n", 160);
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
    }

    std::cout << "---------------------" << std::endl;
    
}