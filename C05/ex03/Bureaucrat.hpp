/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:32:11 by bbenidar          #+#    #+#             */
/*   Updated: 2024/02/21 20:01:41 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include "AForm.hpp"


#include <iostream>
#include <exception>


class Bureaucrat
{
    private:
        const  std::string  _name;
        int                 _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& src);
        Bureaucrat& operator=(const Bureaucrat& rhs);
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void executeForm(AForm const& form) const;
        void signForm(AForm &src);
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        virtual ~Bureaucrat();
};
std::ostream& operator<< (std::ostream& os, const Bureaucrat& src);