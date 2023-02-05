/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 01:13:19 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/06 18:39:07 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
// constructor declaring 

Fixed::Fixed(void) : Value(0) {
}

Fixed::Fixed(const int numbre) {
    this->Value = numbre << this->rawbits;
}

Fixed::Fixed(const float numbre) {
    this->Value = roundf(numbre  * (1 << this->rawbits));
}

//coppy constructo && coppy assigne 

Fixed::Fixed(const Fixed &fixed) {
    *this = fixed;
}

Fixed& Fixed::operator = (const Fixed& fixed) {
    Value = fixed.Value;
    return (*this);
}

// destructor 

Fixed::~Fixed(void) {
}

// converting 
float Fixed::toFloat( void ) const {
    return ((float) this->Value / (1 << this->rawbits));
}

int  Fixed::toInt( void ) const {
    return ((int) this->Value >> this->rawbits);
}

//operators overlode 

std::ostream &operator<<(std::ostream &os, const Fixed &a)
{
    os << a.toFloat();
    return os;
}
// arithmetic operators
Fixed	Fixed::operator * (const Fixed& coming) const {
    Fixed back;
    back.Value = Value * coming.Value >> Fixed::rawbits;
	return (back);
}

Fixed	Fixed::operator / (const Fixed& coming) const {
	return ((Value / coming.Value) << Fixed::rawbits);
}

Fixed	Fixed::operator + (const Fixed& coming) const {
    return (Value + coming.Value);
}

Fixed	Fixed::operator - (const Fixed& coming) const {	
    return (Value - coming.Value);
}
// post-inrement / decrement 

Fixed Fixed::operator ++ (int) {
    Fixed back;
    back.Value = Value++;
    return (back);
}

Fixed Fixed::operator -- (int){
    Fixed back(Value);
    Value--;
    return (back);
}

// //pre-incement / decrement
Fixed& Fixed::operator ++ (void) {
    Value++;
    return (*this);
}

Fixed& Fixed::operator -- (void) {
    Value--;
    return (*this);
}

// //comparison operators

bool   Fixed::operator == (const Fixed& fixed) const {
    return (this->Value == fixed.Value);
}

bool   Fixed::operator != (const Fixed& fixed) const {
    return (this->Value != fixed.Value);
}

bool   Fixed::operator > (const Fixed& fixed) const {
    return (this->Value > fixed.Value);
}

bool   Fixed::operator < (const Fixed& fixed) const {
    return (this->Value < fixed.Value);
}

bool   Fixed::operator <= (const Fixed& fixed) const {
    return (this->Value <= fixed.Value);
}

bool   Fixed::operator >= (const Fixed& fixed) const {
    return (this->Value >= fixed.Value);
}

//min  && max 
Fixed& max (Fixed& a, Fixed& b){
    return (a > b ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b){
    return (a < b  ? a : b);
}

Fixed& min(Fixed& a, Fixed& b){
    return (a < b ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
    return (a < b  ? a : b);
}

//set && get 

int Fixed::getRawBits( void ) const {
    return (Value);
}

void Fixed::setRawBits(int const raw) {
    Value = raw;
}
