/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 20:44:08 by bbenidar          #+#    #+#             */
/*   Updated: 2024/02/21 16:15:12 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"


class Form 
{
    private:
        const std::string _name;
        bool  whether;
        const int ConstaGradeToSign;
        const int ConstaGradeToExec;
    public:
        Form();
        Form(std::string name, int gradeToSign, int gradeToExec);
        Form(Form const& src);
        ~Form(void);
        Form& operator=(Form const& src);
        std::string getName(void) const;
        bool getWhether(void) const;
        int getConstaGradeToSign(void) const;
        int getConstaGradeToExec(void) const;
        void beSigned(Bureaucrat &src) ;
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
        
};
std::ostream& operator<< (std::ostream& os, const Form& src);