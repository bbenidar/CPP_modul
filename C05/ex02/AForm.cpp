/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:46:04 by bbenidar          #+#    #+#             */
/*   Updated: 2023/12/17 16:51:36 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"
#include "Bureaucrat.hpp"


AForm::AForm(void) : _name("default"), ConstaGradeToSign(1), ConstaGradeToExec(1)
{
    std::cout << "Default constructor called" << std::endl;
    this->whether = false;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExec) :
_name(name),
ConstaGradeToSign(gradeToSign),
ConstaGradeToExec(gradeToExec)
{
    std::cout << "Default constructor called" << std::endl;
    this->whether = false;
    if (gradeToSign < 1 || gradeToExec < 1)
        throw AForm::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExec > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const& src) :
_name(src.getName()),
ConstaGradeToSign(src.getConstaGradeToSign()),
ConstaGradeToExec(src.getConstaGradeToExec())
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

AForm::~AForm(void)
{
    std::cout << "Destructor called" << std::endl;
}

AForm& AForm::operator=(AForm const& src)
{
    if (this != &src)
        this->whether = src.getWhether();
    return (*this);
}

std::string AForm::getName(void) const
{
    return (this->_name);
}

bool AForm::getWhether(void) const
{
    return (this->whether);
}

int AForm::getConstaGradeToSign(void) const
{
    return (this->ConstaGradeToSign);
}

int AForm::getConstaGradeToExec(void) const
{
    return (this->ConstaGradeToExec);
}

void AForm::beSigned(Bureaucrat const& src)
{
    if (src.getGrade() > this->ConstaGradeToSign)
        throw AForm::GradeTooLowException();
    else
        this->whether = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return ("Form is not signed");
}

std::ostream& operator<< (std::ostream& os, const AForm& src)
{
    os << src.getName() << ", bureaucrat grade " << src.getConstaGradeToSign() << std::endl;
    return (os);
}

void AForm::signForm(Bureaucrat const& src)
{
    beSigned(src);
    if (this->whether == false)
        std::cout << src.getName() << " cannot sign " << this->getName() << " because his grade is too low" << std::endl;
    else
        std::cout << src.getName() << " signs " << this->getName() << std::endl;
}

