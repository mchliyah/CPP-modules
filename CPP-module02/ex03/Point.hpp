/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:14:14 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/06 18:37:53 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
    Fixed X;
    Fixed Y;
    public:
    Point();
    Point(const float a, const float b);
    Point(const Point &point);
    ~Point();

    Fixed&  GetX(void);
    Fixed&  GetY(void);
    float GetXval(void);
    float GetYval(void);

    void SetX(Fixed x);
    void SetY(Fixed y);
};

bool    is_ther(Point const& a, Point const& b, Point const& c, Point const& x);

#endif