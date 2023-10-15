/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:48:47 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/03 12:49:01 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
        std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE";
    else
    {
        for(int i = 1 ;av[i]; i++)
            for(int j = 0; av[i][j]; j++)
                std :: cout << (char)toupper(av[i][j]) ;
    }
    std :: cout << "\n";
}