/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:09:38 by bbenidar          #+#    #+#             */
/*   Updated: 2024/03/04 15:49:41 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ScalarConverte
{
    private:
        std::string _input;
        char _char;
        int _int;
        float _float;
        double _double;
    public:
        ScalarConverte();
        ScalarConverte(std::string input);
        ScalarConverte(ScalarConverte const& src);
        ScalarConverte& operator=(ScalarConverte const& src);
        static void convert(std::string input);
        ~ScalarConverte();
};