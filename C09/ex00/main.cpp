/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 18:22:59 by bbenidar          #+#    #+#             */
/*   Updated: 2024/08/18 16:53:48 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Usage: ./bitcoin [filename]" << std::endl;
        return 1;
    }
    std::string filename = av[1];
    BitcoinExchange exchange(filename);
    
    return 0;
}