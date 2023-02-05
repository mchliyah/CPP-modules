/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:40:48 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/02 21:55:21 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <iomanip>

class Fixed
{
    private:
    int Value;
    static int const rawbits = 8;

    public:

    Fixed();
    Fixed(const Fixed &value);
    ~Fixed();

    Fixed& operator = (const Fixed& fixed);
    int getRawBits( void ) const;
    void setRawBits(int const raw);
};

#endif