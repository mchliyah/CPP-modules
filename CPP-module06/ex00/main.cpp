/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:13:16 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/19 20:03:05 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

#include <iostream>
#include <string>

int main (int ac, char **av)
{
    if (ac == 2)
    {
        try
        {
            Convert conv(av[1]);
            std::cout<<"float: "<< conv.tofloat()<<"f"<< std::endl;
            std::cout<<"int: "<< conv.toint()<< std::endl;
            std::cout<<"char: "<< conv.tochar()<< std::endl;
            std::cout<<"double: "<< conv.todouble()<< std::endl;
            
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        

        
    }
    return (0);
}