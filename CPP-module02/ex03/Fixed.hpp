/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 01:13:06 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/03 01:26:29 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <iomanip>
#include <cmath>

class Fixed
{
    private:
    int Value;
    static int const rawbits = 8;

    public:

    Fixed();
    Fixed(const Fixed &value);
    Fixed(const int number);
    Fixed(const float number);
    ~Fixed();

    Fixed& operator = (const Fixed& fixed);
// arithmetic operators
    Fixed operator * (const Fixed& coming) const ;
    Fixed operator / (const Fixed& coming) const ;
    Fixed operator + (const Fixed& coming) const ;
    Fixed operator - (const Fixed& coming) const ;
//post-increment
    Fixed operator ++ (int);
    Fixed operator -- (int);
//pre-incement
    Fixed& operator ++ (void);
    Fixed& operator -- (void);
//comparison operators
    bool   operator == (const Fixed& fixed) const ;
    bool   operator != (const Fixed& fixed) const ;
    bool   operator > (const Fixed& coming) const ;
    bool   operator < (const Fixed& coming) const ;
    bool   operator <= (const Fixed& coming) const ;
    bool   operator >= (const Fixed& coming) const ;

    static const Fixed& max(const Fixed& a, const Fixed& b);
    static Fixed& max (Fixed& a, Fixed& b);

    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& min (Fixed& a, Fixed& b);
    
    float toFloat( void ) const;
    int toInt( void ) const;

    int getRawBits( void ) const;
    void setRawBits(int const raw);
};


std::ostream &operator << (std::ostream &os, const Fixed &a);

#endif