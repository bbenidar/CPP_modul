/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 01:43:54 by bbenidar          #+#    #+#             */
/*   Updated: 2024/03/26 20:56:58 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits>

Span::Span(unsigned int nn)
{
    this->stored = 0;
    this->n = nn;
    this->arr.resize(nn);
}

Span::Span()
{
    this->stored = 0;
    this->n = 0;
}

Span::~Span()
{
}

Span::Span(const Span &other)
{
    *this = other;
}

Span &Span::operator=(const Span &other)
{
    if (this == &other)
        return *this;
    this->n = other.n;
    for (unsigned int i = 0; i < other.n; i++)
    {
        this->arr.push_back(other.arr[i]);
    }
    return *this;
}

void Span::addNumber(int n)
{
    try
    {
        if (this->n == 0)
            throw "array not sized at the begin\n";
        if (this->stored == this->n)
            throw "No space left in the array\n";
        this->arr[this->stored] = n;
        this->stored++;
    }
    catch(char const* e)
    {
        std::cerr << e << '\n';
    }
    
    
}

int Span::shortestSpan()
{
        if (this->arr.size() <= 1)
            throw "array too small\n";
        std::set<int> st;
        for (size_t i = 0; i < arr.size() ; i++)
        {
            if (st.count(arr[i]))
                return (0);
            st.insert(arr[i]);
        }
        int mn = INT_MAX;
        
        for (std::set<int>::iterator it = st.begin(); it  != st.end() ; ++it)
        {
            std::set<int>::iterator it2 = it;
            it2++;
            if (it2 == st.end())
                break;
            mn = std::min(mn, abs(*it2 - *it));
        }
        return mn;
}

int Span::longestSpan()
{
    if (this->arr.size() <= 1)
        throw "array too small\n";
    return (*std::max_element(arr.begin(), arr.end()) - *std::min_element(arr.begin(), arr.end()));
}
