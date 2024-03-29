/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 22:39:49 by bbenidar          #+#    #+#             */
/*   Updated: 2024/03/26 23:23:17 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>

void f(T &a)
{
    std::cout << a << std::endl;
}

template <typename T>
void iter(T *array, int len, void (*f)(T &))
{
    for (int i = 0; i < len; i++)
        f(array[i]);
}