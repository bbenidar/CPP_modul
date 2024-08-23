/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:26:12 by bbenidar          #+#    #+#             */
/*   Updated: 2024/08/19 09:57:41 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(const RPN &other)
{
    *this = other;
}

RPN &RPN::operator=(const RPN &other)
{
    if (this != &other)
    {
        _stack = other._stack;
    }
    return *this;
}

std::string to_string(char c)
{
    std::string str;
    str.push_back(c);
    return str;
}

RPN::RPN(std::string str)
{
    std::string word;
    int i = 0;
    while (str[i])
    {
        word = to_string(str[i]);
        if (str[i] == ' ' || str[i] == '\t')
        {
            i++;
            continue;
        }
        if (word == "+" || word == "-" || word == "*" || word == "/")
        {
            if (_stack.size() < 2)
            {
                std::cerr << "Error: not enough values" << std::endl;
                return ;
            }
            float a = _stack.top();
            _stack.pop();
            float b = _stack.top();
            _stack.pop();
            if (word == "+")
                _stack.push(b + a);
            else if (word == "-")
                _stack.push(b - a);
            else if (word == "*")
                _stack.push(b * a);
            else if (word == "/")
            {
                if (a == 0)
                {
                    std::cerr << "Error: division by zero" << std::endl;
                    return ;
                }
                _stack.push(b / a);
            }
        }
        else
        {
            try
            {
                float value = std::atof(word.c_str());
                if (value > 10)
                {
                    std::cerr << "Error: value too high" << std::endl;
                    return ;
                }
                _stack.push(value);
            }
            catch (const std::exception &e)
            {
                std::cerr << "Error: invalid value" << std::endl;
                return ;
            }
        }
        
        i++;
    }
    if (_stack.size() != 1)
    {
        std::cerr << "Error: too many values" << std::endl;
        return ;
    }
    std::cout << _stack.top() << std::endl;
}

RPN::~RPN()
{
}