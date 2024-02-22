/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:56:02 by bbenidar          #+#    #+#             */
/*   Updated: 2024/02/04 19:01:15 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137),
_target("default")
{
}


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137),
_target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src) : AForm(src)
{
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << this->_target << " ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& src)
{
    if (this != &src)
    {
        this->_target = src._target;
    }
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    if (this->getWhether() == false)
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getConstaGradeToExec())
        throw AForm::GradeTooLowException();
    std::ofstream filenam;
    std::string filename = this->_target + "_shrubbery";
    filenam.open(filename.c_str());
    
    if (filenam.is_open()) {
        filenam << "    oxoxoo    ooxoooox" << std::endl;
        filenam << "  ooxoxo oo  oxoxooooox" << std::endl;
        filenam << " oooo xxoxoo ooo oooxoox" << std::endl;
        filenam << " oxo o oxoxo  xoxxoxooox" << std::endl;
        filenam << "  oxo xooxoooo o ooooo" << std::endl;
        filenam << "    ooo\\oo\\  /o/o" << std::endl;
        filenam << "        \\  \\/ /" << std::endl;
        filenam << "         |   /" << std::endl;
        filenam << "         |  |" << std::endl;
        filenam << "         | D|" <<std::endl;
        filenam << "         |  |" <<std::endl;
        filenam << "         |  |" <<std::endl;
        filenam << "      __/____\\__" << std::endl;
    }
    else
        std::cout << "Error while opening file" << std::endl;
    filenam.close();      
}