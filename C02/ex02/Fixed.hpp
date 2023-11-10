/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:00:40 by bbenidar          #+#    #+#             */
/*   Updated: 2023/11/09 16:12:38 by bbenidar         ###   ########.fr       */
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
        
        //comparison operators
        bool    operator>(const Fixed &rhs) const;
        bool    operator<(const Fixed &rhs) const;
        bool    operator>=(const Fixed &rhs) const;
        bool    operator<=(const Fixed &rhs) const;
        bool    operator==(const Fixed &rhs) const;
        bool    operator!=(const Fixed &rhs) const;
        //===========================================
        //arithmetic operators
        Fixed   operator+(const Fixed &rhs) const;
        Fixed   operator-(const Fixed &rhs) const;
        Fixed   operator*(const Fixed &rhs) const;
        Fixed   operator/(const Fixed &rhs) const;
        //===========================================
        // increment decrement
        Fixed   &operator++();
        Fixed   &operator--();
        Fixed   operator++(int);
        Fixed   operator--(int);
        //============================================
        int		getRawBits(void) const;
        float   toFloat(void) const;
        int      toInt(void) const;
        void	setRawBits(int const raw);
        static Fixed	&min(Fixed &a, Fixed &b);
        static Fixed	&max(Fixed &a, Fixed &b);
        static const Fixed	&min(const Fixed &a, const Fixed &b);
        static const Fixed	&max(const Fixed &a, const Fixed &b);
        
};
        std::ostream &operator<<(std::ostream& os, const Fixed& cal) ;


#endif