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
    
    float toFloat( void ) const;
    int toInt( void ) const;

    int getRawBits( void ) const;
    void setRawBits(int const raw);
};

std::ostream &operator << (std::ostream &os, const Fixed &a);

#endif