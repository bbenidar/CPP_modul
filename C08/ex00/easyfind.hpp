/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 01:15:33 by bbenidar          #+#    #+#             */
/*   Updated: 2024/03/25 01:30:48 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>

template <typename T>
int easyfind(T& Cont, int val)
{
    typename T::iterator it = std::find(Cont.begin(), Cont.end(), val);
    if (it == Cont.end())
        return -1;
    return std::distance(Cont.begin(), it);
}