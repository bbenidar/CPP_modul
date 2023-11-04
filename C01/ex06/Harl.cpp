/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:00:18 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/25 09:50:06 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "DEBUG:\nu trying to debug mammamia 🦾🦾\n" << std::endl;
}

void Harl::info(void)
{
    std::cout << "INFO:\nextensive information: my ig is <bhm__beni> not everyone know that 🥶🥶\n" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "WARNING:\nguess what. Warning  🤣🤣\n" << std::endl;
}

void Harl::error(void)
{
    std::cout << "ERROR:\nsuch a weakling! leave the keybord and go tend to the sheep 🤬🤬 \n" << std::endl;
}

enum{
    DEBUG,
    INFO,
    WARNING,
    ERROR,
};

void Harl::complain(std::string level)
{
    void (Harl::*ptr[4])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[5] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    int i = 0;
   for( i = 0; level != levels[i]  && (i < 4); i++)
   {}
   switch (i)
   {
    case DEBUG:
        (this->*ptr[i])();
        i++;
    case INFO:
        (this->*ptr[i])();
        i++;
    case WARNING:
        (this->*ptr[i])();
        i++;
    case ERROR:
        (this->*ptr[i])();
        break;
    default:
        std::cout << "Wrong level idiot 🌝🌝" << std::endl;
        break;
   }
   
}
