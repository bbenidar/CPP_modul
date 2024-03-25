/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:14:22 by bbenidar          #+#    #+#             */
/*   Updated: 2024/03/21 18:24:56 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
    Data data;
    data._char = 'a';
    data._int = 42;
    data._float = 42.42f;
    data._double = 42.42;
    
    uintptr_t raw = Serialize::serialize(&data);
    Data* ptr = Serialize::deserialize(raw);
    std::cout << "char: " << ptr->_char << std::endl;
    std::cout << "int: " << ptr->_int << std::endl;
    std::cout << "float: " << ptr->_float << std::endl;
    std::cout << "double: " << ptr->_double << std::endl;
    

    return (0);
    
}