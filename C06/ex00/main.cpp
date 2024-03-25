/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:14:22 by bbenidar          #+#    #+#             */
/*   Updated: 2024/03/19 23:05:48 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

bool isFloat(std::string input)
{
    for (size_t i = 0; i < input.length(); i++)
    {
        if (input[i] == '.')
            return (true);
    }
    return (false);
}

bool parseFloat(std::string input)
{
    int dot = 0;
    int f = 0;
    for (size_t i = 0; i < input.length(); i++)
    {
        if (input[i] == '.')
            dot++;
        if (input[i] == 'f')
            f++;
        if (!std::isdigit(input[i]) && input[i] != '.' && input[i] != 'f' && input[i] != '+' && input[i] != '-')
            return (false);
        if (input[i] == '+' || input[i] == '-')
        {
            if (i != 0)
                return (false);
        }
        if (input[i] == 'f')
        {
            if (i != input.length() - 1)
                return (false);
        }
        if (input[i] == '.')
        {
            if (i == 0 || i == input.length() - 1)
                return (false);
        }
        
    }
    if (dot > 1 || f > 1)
        return (false);
    return (true);
    
}

bool check_for_valid_input(std::string input)
{
        if (input == "nan" || input == "-inf" || input == "+inf" || input == "-inff" || input == "+inff")
            return (true);
        if (isFloat(input))
        {
            if (parseFloat(input) == false)
                return (false);
        }
        else
        {
            if (input.length() == 1 && !std::isdigit(input[0]))
                return (true);
            for (size_t i = 0; i < input.length(); i++)
            {
                if (!std::isdigit(input[i]) && input[i] != '+' && input[i] != '-')
                    return (false);
            }
        }
        
    return (true);
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return (0);
    }
    if (check_for_valid_input(av[1]) == false)
    {
        std::cout << "Invalid input" << std::endl;
        return (0);
    }
    // 14.12brahim! a 10.000f 1..2! 1.! .2! 10.0f
    // 14.14.2!  14.5ff! abg! 14f 15.2f nan inf -inff +inff
    ScalarConverte test(av[1]);
    test.convert(av[1]);
    return (0);
}