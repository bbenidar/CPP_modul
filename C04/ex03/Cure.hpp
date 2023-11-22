/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:32:33 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/20 16:05:03 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
  private:
  
  public:
    Cure();
    Cure(Cure const &src);
    ~Cure();
    Cure &operator=(Cure const &src);
    AMateria *clone() const;
    void use(ICharacter &target);  
};