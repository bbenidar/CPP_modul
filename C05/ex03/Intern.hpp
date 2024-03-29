/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:12:15 by bbenidar          #+#    #+#             */
/*   Updated: 2024/02/22 15:50:24 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class Intern
{
    public:
    Intern();
    Intern(const Intern& src);
    Intern& operator=(const Intern& src);
    ~Intern();

    AForm *makeForm(std::string name, std::string target);
    
    
};


