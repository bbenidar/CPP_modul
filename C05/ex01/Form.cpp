/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:22:33 by bbenidar          #+#    #+#             */
/*   Updated: 2023/12/17 16:51:04 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form(void) : _name("default"), ConstaGradeToSign(1), ConstaGradeToExec(1)
{
    std::cout << "Default constructor called" << std::endl;
    this->whether = false;
}

Form::Form(std::string name, int gradeToSign, int gradeToExec) :
_name(name),
ConstaGradeToSign(gradeToSign),
ConstaGradeToExec(gradeToExec)
{
    std::cout << "Default constructor called" << std::endl;
    this->whether = false;
    if (gradeToSign < 1 || gradeToExec < 1)
        throw Form::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExec > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const& src) :
_name(src.getName()),
ConstaGradeToSign(src.getConstaGradeToSign()),
ConstaGradeToExec(src.getConstaGradeToExec())
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Form::~Form(void)
{
    std::cout << "Destructor called" << std::endl;
}

Form& Form::operator=(Form const& src)
{
    if (this != &src)
        this->whether = src.getWhether();
    return (*this);
}

std::ostream& operator<< (std::ostream& os, const Bureaucrat& src)
{
    os << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
    return (os);
}

std::string Form::getName(void) const
{
    return (this->_name);
}

bool Form::getWhether(void) const
{
    return (this->whether);
}

int Form::getConstaGradeToSign(void) const
{
    return (this->ConstaGradeToSign);
}

int Form::getConstaGradeToExec(void) const
{
    return (this->ConstaGradeToExec);
}

void Form::beSigned(Bureaucrat const& src)
{
    if (src.getGrade() > this->ConstaGradeToSign)
        throw Form::GradeTooLowException();
    else
        this->whether = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

std::ostream& operator<< (std::ostream& os, const Form& src)
{
    os << "Form " << src.getName() << " is ";
    if (src.getWhether() == true)
        os << "signed" << std::endl;
    else
        os << "not signed" << std::endl;
    return (os);
}

void Form::signForm(Bureaucrat const& src)
{
    if (src.getGrade() > this->ConstaGradeToSign)
        std::cout << src.getName() << " cannot sign " << this->getName() << " because his grade is too low" << std::endl;
    else
        std::cout << src.getName() << " signs " << this->getName() << std::endl;
}

