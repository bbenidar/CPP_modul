/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:34:37 by bbenidar          #+#    #+#             */
/*   Updated: 2024/02/21 18:46:10 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
class Bureaucrat;


class AForm 
{
    private:
        const std::string _name;
        bool  whether;
        const int ConstaGradeToSign;
        const int ConstaGradeToExec;
    public:
        AForm();
        AForm(std::string name, int gradeToSign, int gradeToExec);
        AForm(AForm const& src);
        virtual ~AForm(void);
        AForm& operator=(AForm const& src);
        std::string getName(void) const;
        bool getWhether(void) const;
        int getConstaGradeToSign(void) const;
        int getConstaGradeToExec(void) const;
        void beSigned(Bureaucrat const& src);
        virtual void execute(Bureaucrat const& executor) const = 0;
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
        class FormNotSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        
};
std::ostream& operator<< (std::ostream& os, const AForm& src);