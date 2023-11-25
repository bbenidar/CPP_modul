/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:31:41 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/24 18:07:27 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
  private:

  public:
    Ice();
    Ice(Ice const &src);
    virtual ~Ice();
    Ice &operator=(Ice const &src);
    AMateria *clone() const;
    void use(ICharacter &target);  
};