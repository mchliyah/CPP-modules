/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:07:31 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/14 16:51:51 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() :Form("", 72, 45), Target("unknown_target"){
	std::cout << "Robotomy default constructor called " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("", 72, 45), Target(target){
	std::cout << "Robotomy constructor called " << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) :
	Form(copy.getName(), copy.getSignedgrade(), copy.getExecute()), Target(copy.getTarget()){
	this->setIssigned(copy.getIssigned());
	std::cout<< "RobotomyRequestForm copy constructor called " << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Robotomy destructor called " << std::endl;

}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	if (this == &copy)
		return (*this);
	this->setIssigned(copy.getIssigned());
	this->Target = copy.getTarget();
	return (*this);
}

// getTER - setTER =============================================================

	std::string RobotomyRequestForm::getTarget() const {
		return (this->Target);
	}

    void RobotomyRequestForm::setTarget(std::string target){
		this->Target = target;
	}

// ADDITIONNAL =================================================================
	void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	this->checkExecution(executor);
	std::cout << "annoying drilling noises .... dzzzzzzzzzzzzzzzzzzz......." << std::endl;
	if (std::rand() % 2)
		std::cout << "The Target " << this->Target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "The robotomization on " << this->Target << " failed " << std::endl;
  	}
  
// EXCEPTIONS ==================================================================

// FUNCTIONS SUP ===============================================================
