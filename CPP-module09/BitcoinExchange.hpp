/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 01:53:43 by mchliyah          #+#    #+#             */
/*   Updated: 2023/03/16 03:40:45 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP


#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
#include <map>
#include <sstream>

class BitcoinExchange
{
	private:
		std::ifstream file;
		std::map<std::string, std::string> data;
	public:
		// Constructors
		BitcoinExchange(const std::string& path);
		BitcoinExchange(const BitcoinExchange &src);
		void	read(void);
		void 	print(std::ifstream &input_file);
		void 	check(void);
		~BitcoinExchange();
		// Operators
		BitcoinExchange &operator=(const BitcoinExchange &rhs);
		// Methods
};

#endif