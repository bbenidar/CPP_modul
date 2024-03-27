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

template <typename T>
int easyfind(T& Cont, int val)
{
    for (int i = 0; i < (int)Cont.size(); i++)
    {
        if (Cont[i] == val)
            return (i);
    }
    return -1;
}