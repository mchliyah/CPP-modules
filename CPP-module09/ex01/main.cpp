/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:51:48 by mchliyah          #+#    #+#             */
/*   Updated: 2023/03/20 23:32:29 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn.hpp"

int main(int argc, char const *argv[]) {
	try {
		if (argc != 2)
			throw std::runtime_error ("Usage: ./rpn \"expression\"");
		std::string input = argv[1];
		std::cout << RPN::rpn(input) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}