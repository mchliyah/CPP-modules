/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:07:31 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/16 00:54:48 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

Span::Span(unsigned int value) : N(value){
	std::cout<< "Span constructor called " << std::endl;
}

Span::Span(const Span& copy) : N(copy.N){
	this->nbrs.clear();
	this->nbrs = copy.nbrs;
	std::cout<< "Span constructor called " << std::endl;
}

Span::~Span() {
	this->nbrs.clear();
	std::cout<< "Span destructor called " << std::endl;

}

Span & Span::operator=(const Span& copy)
{
	if (this == &copy)
		return (*this);
	this->N = copy.N;
	this->nbrs.clear();
	this->nbrs = copy.nbrs;
	return (*this);
}

void Span::addNumber(int value)
{
	if (this->nbrs.size() == this->N)
		throw Span::FullSpanException();
	this->nbrs.push_back(value);
}

unsigned int Span::shortestSpan(void) const 
{
	if (this->nbrs.size() <= 1)
		throw Span::LowNumbersException();
	std::sort(nbrs.begin(), nbrs.end());
	std::vector<const int>::iterator first = this->nbrs.begin();
	std::vector<const int>::iterator next = ++this->nbrs.begin();
	unsigned int minDiffrnt = std::abs(*next++ - *first++);
	while (next != this->nbrs.end()) {
		unsigned int diffnt = std::abs(*next - *first);
		if (diffnt < minDiffrnt)
			minDiffrnt = diffnt;
		first++;
		next++;
	}
	return (minDiffrnt);
}

unsigned int Span::longestSpan(void) const
{
	if (this->nbrs.size() <= 1)
		throw Span::LowNumbersException();

	unsigned int biggest = *std::max_element(this->nbrs.begin(), this->nbrs.end());
	unsigned int smallest = *std::min_element(this->nbrs.begin(), this->nbrs.end());
	return (biggest - smallest);
}