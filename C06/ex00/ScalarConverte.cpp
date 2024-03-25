/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:14:45 by bbenidar          #+#    #+#             */
/*   Updated: 2024/03/19 23:07:47 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"
#include <cmath>
#include <climits>

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

void ScalarConverte::convert(std::string input)
{
    std::cout << "Conversion of " << input << std::endl;
    try
    {
        if (input == "nan" || input == "nanf" || input == "+inf" || input == "+inff" || input == "-inf" || input == "-inff")
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: " << input << std::endl;
            std::cout << "double: " << input << std::endl;
            return;
        }
        if (((input[0] >= 'a' && input[0] <= 'z') || (input[0] >= 'A' && input[0] <= 'Z')) && input.length() == 1)
        {
            std::cout << "char: " << input[0] << std::endl;
            std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
            std::cout << "float: " << static_cast<float>(input[0]) << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(input[0]) << ".0" << std::endl;
            return;
        }
        if (input.length() == 1 && !std::isdigit(input[0]))
        {
            std::cout << "char: " << input[0] << std::endl;
            std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
            std::cout << "float: " << static_cast<float>(input[0]) << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(input[0]) << ".0" << std::endl;
            return;
        }
        long i = strtol(input.c_str(), NULL, 10);
        // check if the int is to big or to small usint <climits>
        if (i > INT_MAX || i < INT_MIN)
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << i << std::endl;
        if (i < 32 || i > 126)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: " << static_cast<char>(i) << std::endl;
        float f = strtof(input.c_str(), NULL);
        // check if the float is to big or to small
        // <cmath> HUG_VALF HUG_VAL
        float fractionalPart = std::fmod(f, 1.0f);
        if (f == HUGE_VALF)
            std::cout << "float: impossible" << std::endl;
        else if (f == 0 || fractionalPart == 0.0f)
            std::cout << "float: " << f << ".0f" << std::endl;
        else
            std::cout << "float: " << f << "f" << std::endl;
        double d = strtod(input.c_str(), NULL);
        // check if the double is to big or to small
        if (d == HUGE_VAL)
            std::cout << "double: impossible" << std::endl;
        else if (d == 0 || std::fmod(d, 1.0) == 0.0)
            std::cout << "double: " << d << ".0" << std::endl;
        else
            std::cout << "double: " << d << std::endl;
        
        
    }
    catch(const std::exception& e)
    {
        std::cerr << "char: impossible" << std::endl;
    }
    
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

