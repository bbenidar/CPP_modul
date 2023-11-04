/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:00:24 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/25 09:47:17 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
        std::cout << "---------------------INFO-------------------" << std::endl;
        Harl harl;
        harl.complain("INFO");
        std::cout << "---------------------DEBUG-------------------" << std::endl;
        harl.complain("DEBUG");
        std::cout << "---------------------ERROR-------------------" << std::endl;
        harl.complain("ERROR");
        std::cout << "---------------------WARNING-------------------" << std::endl;
        harl.complain("WARNING");
        std::cout << "---------------------WRONG-------------------" << std::endl;
        harl.complain("WRONGsadarg");
}