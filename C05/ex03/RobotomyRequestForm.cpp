/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:34:32 by bbenidar          #+#    #+#             */
/*   Updated: 2024/02/21 20:09:02 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp" 

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45)
{
    this->_target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45)
{
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src): AForm(src)
{
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& src)
{
    if (this != &src)
    {
        this->_target = src._target;
    }
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    if (this->getWhether() == false)
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getConstaGradeToExec())
        throw AForm::GradeTooLowException();
    int random = rand() % 2;
    std::cout << "Makes some drilling noises" << std::endl;
    if (random == 0)
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->_target << " has not been robotomized successfully" << std::endl;
}


