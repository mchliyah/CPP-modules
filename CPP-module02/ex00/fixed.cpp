/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:38:07 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/03 00:30:45 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fixed.hpp"

Fixed::Fixed(void) :Value(0) {
    std::cout<< "Default constructor called" << std::endl;
}


Fixed::Fixed(const Fixed &fixed) {
    std::cout<<"Copy constructor called" <<std::endl;
    this->operator = (fixed);
    // this->setRawBits(fixed.rawbits);
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
