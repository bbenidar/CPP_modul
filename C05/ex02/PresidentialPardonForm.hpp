/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 21:16:01 by bbenidar          #+#    #+#             */
/*   Updated: 2024/02/21 19:00:08 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

class PresidentialPardonForm: public AForm
{
    private:
        std::string _target;
    public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const& src);
    ~PresidentialPardonForm();
    
    
    
    PresidentialPardonForm& operator=(PresidentialPardonForm const& src);
    std::string getTarget() const;
    void setTarget(std::string target);
    void execute(Bureaucrat const& executor) const;
};