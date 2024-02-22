/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:38:27 by bbenidar          #+#    #+#             */
/*   Updated: 2024/02/22 15:59:32 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{}
Intern::Intern(const Intern& src)
{
    *this = src;
}

Intern::~Intern()
{
}

Intern& Intern::operator=(const Intern& rhs)
{
    if (this != &rhs)
    {
        *this = rhs;
    }
    return (*this);
}

AForm* Intern::makeForm(std::string form, std::string target)
{
    
    int formIndex = (form == "robotomy request") ? 0 : (form == "presidential pardon") ? 1 : (form == "shrubbery creation") ? 2 : -1;
    switch (formIndex)
    {
        case 0:
        {
            RobotomyRequestForm *r = new RobotomyRequestForm(target);
            std::cout << "Intern creates " << r->getName() << std::endl;
            return (r);   
        }
        case 1:
        {
            PresidentialPardonForm *p = new PresidentialPardonForm(target);
            std::cout << "Intern creates " << p->getName() << std::endl;
            return (p);
        }
        case 2:
        {
            ShrubberyCreationForm *s = new ShrubberyCreationForm(target);
            std::cout << "Intern creates " << s->getName() << std::endl;
            return (s);
        }
        default:
        {
            std::cerr << "Form not found" << std::endl;
            return (NULL);
        }
    }
}


