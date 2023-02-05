/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:07:31 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/16 00:54:48 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Convert.hpp"

Convert::Convert(){
	std::cout<< "Convert default constructor called " << std::endl;
}

Convert::Convert(std::string num) : Num(num){
	std::cout<< "Convert constructor called " << std::endl;
}

Convert::Convert(const Convert& copy) {
	*this = copy; 
	std::cout<< "Convert constructor called " << std::endl;
}

Convert::~Convert() {
	std::cout<< "Convert destructor called " << std::endl;

}

Convert & Convert::operator=(const Convert& copy)
{
	if (this == &copy)
		return (*this);
	Num = copy.getNum();
	return (*this);
}

// GETTER - SETTER =============================================================

// ADDITIONNAL =================================================================

// EXCEPTIONS ==================================================================

// FUNCTIONS SUP ===============================================================
