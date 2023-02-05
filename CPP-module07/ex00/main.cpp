/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:20:09 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/29 19:46:17 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) {
int a = 2;
int b = 3;
swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << max( c, d ) << std::endl;
return 0;
}