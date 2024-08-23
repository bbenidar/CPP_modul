/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 01:43:56 by bbenidar          #+#    #+#             */
/*   Updated: 2024/04/03 01:34:27 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

class Span{
    private:
        unsigned int n;
        unsigned int stored;
        std::vector<int> arr;

     public:
        Span(unsigned int nn);
        Span();
        ~Span();
        Span( const Span &other);
        Span &operator=(const Span  &other);
        void addNumber(int n);
        void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();
};