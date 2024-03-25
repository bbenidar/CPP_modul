/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 02:14:58 by bbenidar          #+#    #+#             */
/*   Updated: 2024/03/25 00:56:46 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
    private:
        T *arr;
        unsigned int n;
    public:
        Array();
        Array(unsigned int n);
        ~Array();
        Array( const Array<T> &other);
        Array<T> &operator=(const Array<T>  &other);
        unsigned int size() const ;

        T &operator[](unsigned int n);
};
template <typename T>
Array<T>::Array() : arr(nullptr), n(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : n(n)
{
    arr = new T[n];
}
template <typename T>
Array<T>::~Array()
{
    delete[] arr;
}
template <typename T>
Array<T>::Array(const Array<T> &other) : n(other.n)
{
    arr = new T[n];
    for (unsigned int i = 0; i < n; ++i)
    {
        arr[i] = other.arr[i];
    }
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &other)
{
    if (this == &other)
        return *this;
    delete[] arr;
    n = other.n;
    arr = new T[n];
    for (unsigned int i = 0; i < n; ++i)
        arr[i] = other.arr[i];
    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int n)
{
    try
    {
        
        if (n >= this->n)
            throw std::out_of_range("Out of range");
        return arr[n];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return arr[0];
    
   
}

template <typename T>
unsigned int Array<T>::size() const
{
    return n;
}