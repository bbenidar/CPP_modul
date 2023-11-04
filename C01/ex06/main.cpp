/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:00:24 by bbenidar          #+#    #+#             */
/*   Updated: 2023/10/21 15:56:27 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"



int main(int argc, char **argv )
{
  if (argc != 2)
  {
      std::cout << "Wrong number of arguments" << std::endl;
      return 0;
  }
  Harl harl;
  harl.complain(argv[1]);

  return 0;
}