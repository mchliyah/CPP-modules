/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:45:41 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/29 19:45:54 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int arrint[10] = { 0, 1, 2, 3, 4 , 5, 6, 7, 8, 9};
	iter(arrint, 10, increment);
	iter(arrint, 10, print);
    std::cout << std::endl;
	iter(arrint, 10, decrement);
	iter(arrint, 10, print);
    std::cout << std::endl;

    std::string arrstr[10] = { "test0", "test1", "test2", "test3", "test4" , "test5", "test6", "test7", "test8", "test9"};
	iter(arrstr, 10, print);
    std::cout << std::endl;
	return (0);
}
