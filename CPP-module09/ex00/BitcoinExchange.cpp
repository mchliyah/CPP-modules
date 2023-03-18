/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 01:53:35 by mchliyah          #+#    #+#             */
/*   Updated: 2023/03/17 15:29:36 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string& path) : file(path) {
	if (!file.is_open())
		throw std::runtime_error("can't open file");	
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) {
	*this = src;
}

BitcoinExchange::~BitcoinExchange() {
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs) {
	if (this != &rhs)
		data.insert(rhs.data.begin(), rhs.data.end());
	return *this;
}

void	BitcoinExchange::read() {
	std::string line;

	while (std::getline(file, line)) {
		if (line.find("date") != std::string::npos)
		{
			line.clear();
			continue;
		}
		if (line.find(',') == std::string::npos)
			throw std::runtime_error("Invalid line format");
		std::string key = line.substr(0, line.find(','));
		std::string value = line.substr(line.find(',') + 1);
		data.insert(std::pair<std::string, std::string>(key, value));
		line.clear();
		key.clear();
		value.clear();
	}
}

void	BitcoinExchange::check(void) {
	for (std::map<std::string, std::string>::iterator it = data.begin(); it != data.end(); it++) {
		std::string key = it->first;
		std::string value = it->second;
		if (key.size() != 10)
			throw std::runtime_error("Invalid key format");
		for (int i = 0; i < 10; i++) {
			if (i < 4) {
				if (!std::isdigit(key[i]))
					throw std::runtime_error("Invalid year format");
			}
			else if (i == 4 || i == 7) {
				if (key[i] != '-')
					throw std::runtime_error("Invalid separator format or separator not found");
			}
			else {
				if (!std::isdigit(key[i]))
					throw std::runtime_error("Invalid day or month format");
			}
		}
		if (key.substr(0, 4) < "2009" || key.substr(0, 4) > "2022")
			throw std::runtime_error("out of range year");
		if (key.substr(5, 2) < "01" || key.substr(5, 2) > "12")
			throw std::runtime_error("invalid month");
		if (key.substr(8, 2) < "01" || key.substr(8, 2) > "31")
			throw std::runtime_error("invalid day");
		if (key.substr(5, 2) == "02" && key.substr(8, 2) > "28")
			throw std::runtime_error("february can't have more than 28 days");
		if (std::stof(value) < 0)
			throw std::runtime_error("negative value not allowed");
	}
}

void	BitcoinExchange::print(std::ifstream &input_file) {
	// printing the map content withe value multiplyd  exchange rate according to the date indicated in database
	struct tm tm;
	std::string line;

	while (std::getline(input_file, line))
	{
		if (line.find("date") != std::string::npos)
		{
			line.clear();
			continue;
		}
		if (!strptime(line.substr(0, 10).c_str(), "%Y-%m-%d", &tm))
		{
			std::cout << "bad imput => " << line.substr(0, 10) << std::endl;
			line.clear();
			continue;
		}
		line.erase(std::remove(line.begin(), line.end(), ' '), line.end());
		std::istringstream iss(line);
		std::string date;
		std::string currency;
		std::getline(iss, date, '|');
		iss >> currency;
		if (currency.empty() || std::stof(currency) < 0 || std::stof(currency) > 1000)
		{
			if (currency.empty())
				std::cout << "bad imput => " << line << std::endl;
			else if (std::stof(currency) < 0)
				std::cout << "Error: not a positive number." << std::endl;
			else if (std::stof(currency) > 1000)
				std::cout << "Error: too large a number." << std::endl;
			line.clear();
			date.clear();
			currency.clear();
			continue;
		}
		std::map<std::string, std::string>::iterator it;
		std::string value;
		for (it = data.begin(); it->first <= date ; it++) {
			value.clear();
			value = it->second;
		}
		std::cout << date << " => " << currency << " = " << std::stof(value) * std::stof(currency) << std::endl;
		date.clear();
		currency.clear();
		line.clear();
	}
	
}