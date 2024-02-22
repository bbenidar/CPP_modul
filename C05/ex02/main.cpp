/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:32:14 by bbenidar          #+#    #+#             */
/*   Updated: 2024/02/22 15:27:05 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>


int main()
{
    Bureaucrat b1("B1", 1);
    Bureaucrat b2("B2", 150);
    ShrubberyCreationForm s1("home");
    ShrubberyCreationForm s2("school");
    RobotomyRequestForm r1("home");
    PresidentialPardonForm p1("home");
    try
    {
        b1.signForm(s1);
        b1.executeForm(s1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        b2.signForm(s2);
        b2.executeForm(s2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "-------------------" << std::endl;
    try {
        b1.signForm(r1);
        b1.executeForm(r1);
    } catch (std::exception &e) {
        std::cerr << e.what() << '\n';
    }
    std::cout << "-------------------" << std::endl;
    try {
        p1.beSigned(b1);
        b1.executeForm(p1);
    } catch (std::exception &e) {
        std::cerr << e.what() << '\n';
    }
    return 0;
}