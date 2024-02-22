/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:14:22 by bbenidar          #+#    #+#             */
/*   Updated: 2023/12/17 23:14:31 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return (0);
    }
    ScalarConverte test(av[1]);
    return (0);
}