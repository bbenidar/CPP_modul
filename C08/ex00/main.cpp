/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 01:15:36 by bbenidar          #+#    #+#             */
/*   Updated: 2024/03/25 01:30:15 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    int value = 3;
    
    int index = easyfind(vec, value);
    if (index != -1) {
        std::cout << "Value " << value << " found at index " << index << std::endl;
    } else {
        std::cout << "Value " << value << " not found in the vector" << std::endl;
    }
    
    return 0;
}