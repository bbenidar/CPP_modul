/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:00:40 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/08 13:47:02 by bbenidar         ###   ########.fr       */
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
        Fixed(const int n);
        Fixed(const float n);
        Fixed(const Fixed &src);
        ~Fixed(void);
        Fixed   &operator=(const Fixed &rhs);
        int		getRawBits(void) const;
        float   toFloat(void) const;
        int      toInt(void) const;
        void	setRawBits(int const raw);
        
};
        std::ostream &operator<<(std::ostream& os, const Fixed& cal) ;


#endif