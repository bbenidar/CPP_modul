/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:32:14 by bbenidar          #+#    #+#             */
/*   Updated: 2024/02/22 15:54:53 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
    Bureaucrat b1("B1", 1);
    Bureaucrat b2("B2", 150);
    
    
    try
    {
        Intern intern;
        AForm *s1 = intern.makeForm("shrubbery creation", "home");
        AForm *r1 = intern.makeForm("robotomy request", "home");
        AForm *p1 = intern.makeForm("presidential pardon", "home");
        b1.signForm(*s1);
        b1.executeForm(*s1);
        b1.signForm(*r1);
        b1.executeForm(*r1);
        b1.signForm(*p1);
        b1.executeForm(*p1);
        std::cout << "-------------------" << std::endl;
        b2.signForm(*s1);
        b2.executeForm(*s1);
        b2.signForm(*r1);
        b2.executeForm(*r1);
        b2.signForm(*p1);
        b2.executeForm(*p1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}