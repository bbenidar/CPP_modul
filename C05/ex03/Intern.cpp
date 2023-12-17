/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:38:27 by bbenidar          #+#    #+#             */
/*   Updated: 2023/12/17 22:55:02 by bbenidar         ###   ########.fr       */
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
    
    int formIndex = (form == "RobotomyRequestForm") ? 0 : (form == "PresidentialPardonForm") ? 1 : (form == "ShrubberyCreationForm") ? 2 : -1;
    switch (formIndex)
    {
        case 0:
            return (new RobotomyRequestForm(target));
            break;
        case 1:
            return (new PresidentialPardonForm(target));
            break;
        case 2:
            return (new ShrubberyCreationForm(target));
            break;
        default:
            break;
    }
    return (NULL);
}


