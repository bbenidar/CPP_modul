/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:32:08 by bbenidar          #+#    #+#             */
/*   Updated: 2024/02/04 16:14:07 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :
_name("Bureaucrat"),
_grade(150)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) :
_name(name),
_grade(grade)
{
    std::cout << "Constructor called" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
    *this = src;
    return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
    if (this != &rhs)
        this->_grade = rhs._grade;
    return (*this);
}

std::ostream& operator<< (std::ostream& os, const Bureaucrat& src)
{
    os << src.getName() << " grade : " << src.getGrade() << std::endl;
    return (os);
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is under TooHigh ");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is over Too Low");
}

