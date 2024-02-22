/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:14:45 by bbenidar          #+#    #+#             */
/*   Updated: 2023/12/17 23:15:34 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

ScalarConverte::ScalarConverte()
{
}

ScalarConverte::ScalarConverte(std::string input)
{
    this->_input = input;
}

ScalarConverte::ScalarConverte(ScalarConverte const& src)
{
    *this = src;
}

ScalarConverte::~ScalarConverte()
{
}

ScalarConverte& ScalarConverte::operator=(ScalarConverte const& src)
{
    this->_input = src._input;
    this->_char = src._char;
    this->_int = src._int;
    this->_float = src._float;
    this->_double = src._double;
    return (*this);
}

