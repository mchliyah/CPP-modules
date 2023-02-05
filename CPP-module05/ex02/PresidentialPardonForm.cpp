/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:07:31 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/14 16:51:51 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : Form("", 25, 5), Target("unknown_target"){
	std::cout << "Presidential default constructor called " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("", 25, 5), Target(target){
	std::cout << "Presidential constructor called " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) :
	Form(copy.getName(), copy.getSignedgrade(), copy.getExecute()), Target(copy.getTarget()){
	this->setIssigned(copy.getIssigned());
	std::cout<< "PresidentialPardonForm copy constructor called " << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "Presidential destructor called " << std::endl;

}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	if (this == &copy)
		return (*this);
	this->setIssigned(copy.getIssigned());
	this->Target = copy.getTarget();
	return (*this);
}

// getTER - SETTER =============================================================

	std::string PresidentialPardonForm::getTarget() const {
		return (this->Target);
	}

    void PresidentialPardonForm::setTarget(std::string target){
		this->Target = target;
	}

// ADDITIONNAL =================================================================
  	void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	this->checkExecution(executor);
	std::cout << this->Target << " has been pardoned by Zafod Beeblebrox."
		<< std::endl;
  }

// EXCEPTIONS ==================================================================

// FUNCTIONS SUP ===============================================================
