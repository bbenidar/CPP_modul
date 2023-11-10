/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:00:40 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/06 13:30:21 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int					value;
        static const int	fractional_bits = 8;
    public:
        Fixed(void);
        Fixed(const Fixed &src);
        ~Fixed(void);
        Fixed &operator=(const Fixed &rhs);
        int		getRawBits(void) const;
        void	setRawBits(int const raw);
};


#endif