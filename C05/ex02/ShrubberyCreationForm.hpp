/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:55:01 by bbenidar          #+#    #+#             */
/*   Updated: 2024/02/04 18:54:21 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
    private:
        std::string _target;
    public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const& src);
    ~ShrubberyCreationForm();
    
    ShrubberyCreationForm& operator=(ShrubberyCreationForm const& src);
    void execute(Bureaucrat const& executor) const;

    
};
