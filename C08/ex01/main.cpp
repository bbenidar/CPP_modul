/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 01:43:26 by bbenidar          #+#    #+#             */
/*   Updated: 2024/03/26 21:02:35 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>

int main()
{
   { 
    Span sp = Span(6);
    sp.addNumber(-5);
    sp.addNumber(-51);
    sp.addNumber(3);
    sp.addNumber(7);
    sp.addNumber(9);
    sp.addNumber(12);
    try{
        std::cout << "sort spas : " << sp.shortestSpan() << std::endl;
        std::cout << "long Span : " << sp.longestSpan() << std::endl;
    }
    catch(const char* e)
    {
        std::cerr << e << '\n';
    }
    }
    {
        std::cout << "---------------------" << std::endl;
        Span sp = Span();
        sp.addNumber(-5);
        try{
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
            //size
            
        }
        catch(const char* e)
        {
            std::cerr << e << '\n';
        }
    }
    {
        Span sp = Span(20);
        std::vector<int> vec;

        std::srand(std::time(0)); 

        for (int i = 0; i < 20; i++)
        {
            vec.push_back(std::rand() % 1000);
            std::cout << vec[i] << " ";
        }
        std::cout << std::endl;
        sp.addNumbers(vec.begin(), vec.end());
        try{
        std::cout << "sort spas : " << sp.shortestSpan() << std::endl;
        std::cout << "long Span : " << sp.longestSpan() << std::endl;
        }
        catch(const char* e)
        {
            std::cerr << e << '\n';
        }

    }
    // std::cout << sp.longestSpan() << std::endl;
    return 0;
    
}