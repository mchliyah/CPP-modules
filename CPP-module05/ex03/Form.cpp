/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:07:31 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/14 16:51:51 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form(): Name(""), Is_signed(false), Signe_grade(this->lowstgrade), Execute(this->lowstgrade){
	getExeption();
	std::cout<< "Form default constructor called " << std::endl;
}

Form::Form(std::string name, int sgrade, int exec) : Name(name) , Is_signed(false), Signe_grade(sgrade), Execute(exec){
	getExeption();
	std::cout<< "Form constructor called" << std::endl;
}

Form::Form(Form& copy) : Name(copy.getName()) , Is_signed(copy.getIssigned()), Signe_grade(copy.getSignedgrade()), Execute(copy.getExecute()) {
	getExeption();
	std::cout<< "Form copy constructor called " << std::endl;
}

Form::~Form() {
	std::cout << "form destructor called " << std::endl;
}

Form & Form::operator=(const Form& copy)
{
	if (this == &copy)
		return (*this);
	this->Is_signed = copy.getIssigned();
	std::cout<< "copy assingement called " << std::endl;
	return (*this);
}

// getTER - SETTER =============================================================

    bool Form::getIssigned(void) const{
		return (this->Is_signed);
	}

    const std::string Form::getName(void) const {
		return (this->Name);

	}

	int Form::getSignedgrade(void) const {
		return (this->Signe_grade);
	}

    int Form::getExecute(void) const {
		return (this->Execute);
	}

	void	Form::setIssigned(bool x){
		this->Is_signed = x;
	}
	
    void Form::getExeption(void ) const {
    if(Signe_grade < highergrade || Execute < highergrade)
        throw GradeTooHighException();
    else if (Signe_grade > lowstgrade || Execute > lowstgrade)
        throw GradeTooLowException();
	}

// ADDITIONNAL =================================================================

    void Form::beSigned(const Bureaucrat &b) {
		if (b.getGrade() <= Signe_grade)
			this->Is_signed = true;
		else
			throw Form::GradeTooLowException();
	}

	void Form::checkExecution(Bureaucrat const & executor) const {
		if (executor.getGrade() <= this->getExecute())
			executor.execution(*this);
		else
			throw Form::GradeTooLowException();
	}

std::ostream &operator << (std::ostream &os, const Form &a){
	os << a.getName() << " Form signe grade " << a.getSignedgrade() << " and execution grade " << a.getExecute();
	return (os);
}
