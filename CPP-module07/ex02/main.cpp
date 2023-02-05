/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:25:34 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/30 19:56:57 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int main(void){
    try
    {
        const Array<int> test(10);
        for (int i = 0; i < 10 ; i++)
            test[i] = 2;
        Array<int> copy = test;
        copy[1] = 9;
        for (int i = 0 ; i < 10 ; i++)
            std::cout << copy[i]<< std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}