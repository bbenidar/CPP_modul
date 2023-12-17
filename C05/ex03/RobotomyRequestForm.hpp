/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:55:59 by bbenidar          #+#    #+#             */
/*   Updated: 2023/12/17 22:55:29 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

class RobotomyRequestForm: public AForm
{
    private:
        std::string _target;
    public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const& src);
    ~RobotomyRequestForm();
    
    RobotomyRequestForm& operator=(RobotomyRequestForm const& src);
    void robotexecute() const;
    void execute(Bureaucrat const& executor) const;

    
};