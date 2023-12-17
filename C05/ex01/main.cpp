/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:32:14 by bbenidar          #+#    #+#             */
/*   Updated: 2023/12/16 15:02:15 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b("brahim", 1);
        Form f("formulaire", 1, 1);
        std::cout << "2 :"<< b << std::endl;
        std::cout<< "1 :" << f << std::endl;
        f.signForm(b);
       
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}