/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 23:39:38 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/14 15:17:48 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){

    try 
    {   
        Bureaucrat test("name", 50);
        test.increment(1);
        std::cout << test<< std::endl;
        test.increment(4);
        std::cout << test<< std::endl;
        test.decrement(200);
        std::cout << test<< std::endl;
        test.increment(50);
        std::cout << test << std::endl;
    }
    catch(std::exception& e) {
        std::cerr << "error : " << e.what() << std::endl;
    }
    return (0);
}