/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:07:38 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/14 16:50:35 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern;

class Intern
{
	public:
		Intern();
		Intern(const Intern& copy);
		virtual ~Intern();
		Intern &operator=(const Intern& copy);

	Form* makeForm(std::string f_name, std::string target);
		// Exceptions
		class Cantmakeform : public std::exception
		{
			public:
			const char* what() const throw(){
					return ("NULL forme can make memory probleme");
			}

		};
};

// FUNCTIONS SUP PROTOYPES =====================================================

#endif
