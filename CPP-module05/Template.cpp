/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:07:31 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/16 00:54:48 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Template.hpp"

Template::Template() {
	std::cout<< "Template default constructor called " << std::endl;
}

Template::Template(/*param*/) {
	std::cout<< "Template constructor called " << std::endl;
}

Template::Template(const Template& copy) {
	 (void)copy; 
	std::cout<< "Template constructor called " << std::endl;
}

Template::~Template() {
	std::cout<< "Template destructor called " << std::endl;

}

Template & Template::operator=(const Template& copy)
{
	if (this == &copy)
		return (*this); 
	return (*this);
}

// GETTER - SETTER =============================================================

// ADDITIONNAL =================================================================

// EXCEPTIONS ==================================================================

// FUNCTIONS SUP ===============================================================
