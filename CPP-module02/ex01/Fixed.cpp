/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 01:13:19 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/03 01:22:45 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) :Value(0) {
    std::cout<< "Default constructor called" << std::endl;
}

Fixed::Fixed(const int numbre) {
    std::cout<< "int constructor called" << std::endl;
    this->Value = numbre << this->rawbits;
}

Fixed::Fixed(const float numbre) {
    std::cout<< "float constructor called" << std::endl;
    this->Value = roundf(numbre  * (1 << this->rawbits));
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout<<"Copy constructor called" <<std::endl;
    *this = fixed;
}

float Fixed::toFloat( void ) const {
    return ((float) this->Value / (1 << this->rawbits));
}

int  Fixed::toInt( void ) const {
    return ((int) this->Value >> this->rawbits);
}

Fixed& Fixed::operator = (const Fixed& fixed)
{
    std::cout<< "Copy assignment operator called" << std::endl;
    this->setRawBits(fixed.getRawBits());
    return (*this);
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
    std::cout<< "getRawBits member function called" << std::endl;
    return (this->Value);
}

void Fixed::setRawBits(int const raw) {
    this->Value = raw;
}

std::ostream &operator << (std::ostream &os, const Fixed &a)
{
    os << a.toFloat();
    return os;
}
