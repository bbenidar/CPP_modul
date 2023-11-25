/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:32:33 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/24 18:07:21 by bbenidar         ###   ########.fr       */
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
    virtual ~Cure();
    Cure &operator=(Cure const &src);
    AMateria *clone() const;
    void use(ICharacter &target);  
};