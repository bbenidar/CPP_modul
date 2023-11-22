/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:03:35 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/18 23:28:12 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
    public:
    WrongCat();
    WrongCat(const WrongCat& src);
    WrongCat &operator=(const WrongCat& rhs);
    ~WrongCat();
    void makeSound() const;
};