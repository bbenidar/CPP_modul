/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:54:32 by bbenidar          #+#    #+#             */
/*   Updated: 2024/02/21 20:00:05 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
    this->_target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : AForm(src)
{
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
    if (this != &rhs)
        this->_target = rhs._target;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > getConstaGradeToExec())
        throw AForm::GradeTooLowException();
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
    return (this->_target);
}

void PresidentialPardonForm::setTarget(std::string target)
{
    this->_target = target;
}


