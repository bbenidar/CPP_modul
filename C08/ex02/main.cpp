/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 02:32:33 by bbenidar          #+#    #+#             */
/*   Updated: 2024/04/03 02:42:33 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
       { 
        std::cout << "------------------ MutanStack ------------------" << std::endl;
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;
        ++it;
        }
        std::stack<int> s(mstack);
        }
        {
           std::cout << "------------------ list ------------------" << std::endl;
        std::list<int> mstack;
        mstack.push_back(5);
        mstack.push_back(17);
        std::cout << mstack.back() << std::endl;
        mstack.pop_back();
        std::cout << mstack.size() << std::endl;
        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        mstack.push_back(0);
        std::list<int>::iterator it = mstack.begin();
        std::list<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        }
        std::cout << "------------------ more tests ------------------" << std::endl;
        {
            MutantStack<std::string> mstack;
            mstack.push("Hello");
            mstack.push("World");
            mstack.push("!");
            std::cout << "Top : "<< mstack.top() << std::endl;
            mstack.pop();
            std::cout << mstack.size() << std::endl;
            mstack.push("C++");
            mstack.push("Programming");
            mstack.push("Language");
            MutantStack<std::string>::iterator it = mstack.begin();
            MutantStack<std::string>::iterator ite = mstack.end();
            ++it;
            --it;
            while (it != ite)
            {
                std::cout << *it << std::endl;
                ++it;
            }
            std::stack<std::string> s(mstack);
        }
            return 0;
}