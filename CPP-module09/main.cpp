/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 01:52:44 by mchliyah          #+#    #+#             */
/*   Updated: 2023/03/16 03:40:30 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	try {
		if (argc != 2)
		throw std::runtime_error("Invalid number of arguments");
		std::ifstream input_file(argv[1]);
		BitcoinExchange exchange("data.csv");
		exchange.read();
		exchange.check();
		exchange.print(input_file);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}