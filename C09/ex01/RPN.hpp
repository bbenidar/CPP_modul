/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:26:16 by bbenidar          #+#    #+#             */
/*   Updated: 2024/08/21 15:33:03 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <sstream>

class RPN
{
    public:
        std::stack<long> _stack;
        RPN();
        RPN(std::string str);
        RPN(const RPN &other);
        RPN &operator=(const RPN &other);
        ~RPN();
};