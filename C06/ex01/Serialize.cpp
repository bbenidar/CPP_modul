/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:02:07 by bbenidar          #+#    #+#             */
/*   Updated: 2024/03/21 18:23:23 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"


uintptr_t Serialize::serialize(Data* ptr)
{
    if (!ptr)
        exit(1);
    uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
    return (raw);
}

Data* Serialize::deserialize(uintptr_t raw)
{
    if (!raw)
        exit(1);
    Data* ptr = reinterpret_cast<Data*>(raw);
    return (ptr);
}


