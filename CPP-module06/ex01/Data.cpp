/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:07:31 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/16 00:54:48 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Data.hpp"

Data::Data() {
	std::cout<< "Data default constructor called " << std::endl;
}

Data::Data(std::string name, int num): Name(name), Test(num){
	std::cout<< "Data constructor called " << std::endl;
}

Data::Data(const Data& copy) {
	*this = copy; 
	std::cout<< "Data constructor called " << std::endl;
}

Data::~Data() {
	std::cout<< "Data destructor called " << std::endl;

}

Data & Data::operator=(const Data& copy)
{
	if (this == &copy)
		return (*this);
	this->Name = copy.getName();
	this->Test = copy.getTest(); 
	return (*this);
}

// GETTER - SETTER =============================================================

std::string Data::getName() const {
	return (this->Name);
}

int Data::getTest() const {
	return (this->Test);
}

void Data::setName(std::string name){
	this->Name = name;
}
void Data::setTest(int num){
	this->Test = num;
}

uintptr_t serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data *>(raw));
}
