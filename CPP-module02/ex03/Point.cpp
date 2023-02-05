/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:14:08 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/06 18:39:24 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : X(0), Y(0) {
}

Point::Point(const float x, const float y) {
    this->X = Fixed(x);
    this->Y = Fixed(y);
}

Point::~Point(){
}

Point::Point(const Point &point){
    *this = point;
}

void Point::SetX(Fixed x) {
    this->X = x;
}

void Point::SetY(Fixed y) {
    this->Y = y;
}

float Point::GetXval(void) {
    return (this->X.toFloat());
}

float Point::GetYval(void) {
    return (this->Y.toFloat());
}

Fixed& Point::GetX(void) {
    return (this->X);
}

Fixed& Point::GetY(void) {
    return (this->Y);
}
