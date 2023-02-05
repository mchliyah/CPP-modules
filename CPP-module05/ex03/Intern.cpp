/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:07:31 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/16 00:54:48 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

Intern::Intern() {
	std::cout<< "Intern default constructor called " << std::endl;
}

Intern::Intern(const Intern& copy) {
	*this = copy; 
	std::cout<< "Intern constructor called " << std::endl;
}

Intern::~Intern() {
	std::cout<< "Intern destructor called " << std::endl;

}

Intern & Intern::operator=(const Intern& copy)
{
	if (this == &copy)
		return (*this);
	return (*this);
}

// ADDITIONNAL =================================================================

	Form* Intern::makeForm(std::string f_name, std::string target){
		Form *ret = NULL;
		switch ((f_name == "robotomy request") +
			(f_name ==  "shrubbery creation") * 2 + (f_name == "presidential pardon") * 3)
		{
			case 1:
				std::cout<< "Intern creates " << f_name << std::endl;
				ret = new RobotomyRequestForm(target);
				break;
			case 2:
				std::cout<< "Intern creates " << f_name << std::endl;
				ret = new ShrubberyCreationForm(target);
				break;
			case 3:
				std::cout<< "Intern creates " << f_name << std::endl;
				ret = new PresidentialPardonForm(target);
				break;
			default:
				std::cout<< "Intern cant creates " << f_name << " check the other office !!" << std::endl;
				throw Cantmakeform();
		}
		return (ret);
	}

