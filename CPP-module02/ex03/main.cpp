/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 23:18:32 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/06 18:45:50 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float tri_area(Point a, Point b, Point x)
{
    float area;

    area = (x.GetXval() * (a.GetYval() - b.GetYval())
        + (a.GetXval()* (b.GetYval() - x.GetYval()))
        + (b.GetXval() * (x.GetYval() - a.GetYval()))) / 2 ;
    if (area < 0)
        return (area *= -1);
    return (area);
}

bool    is_ther(Point const& a, Point const& b, Point const& c, Point const& x)
{
    
    if ( tri_area(x, a, b) + tri_area(x, a, c) + tri_area(x, b, c)  == tri_area(a, b, c))
        return (true);
    return (false);
}

int main( void ) {

    //abc is a triangle and x point ... is the point to be checked
    Point a;
    Point b(1, 1);
    Point c(2, 0);
    Point x(1/2, 1/4);
    Point point;

    //is ther fonction return true if the last parameter point is inside triangle abc 
    std::cout<< "x is ther "<< std::boolalpha << is_ther(a, b, c, x) << std::endl;
    std::cout<< "x is ther "<< std::boolalpha << is_ther(a, b, c, point) << std::endl;

    return 0;
}