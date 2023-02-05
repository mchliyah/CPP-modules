/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 23:39:50 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/17 23:11:54 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : Name("Bureaucrat"), Grade(this->lowstgrade){
    getExeption();
    std::cout<< "default constructor call" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name) , Grade(grade){
    getExeption();
    std::cout << "constructor called " << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy){
    *this = copy;
    std::cout<< "copy constructor called"<< std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& copy){
    if (this == &copy)
        return (*this);
    Grade = copy.getGrade();
    std::cout<< "coppy assignment called" << std::endl;
    return (*this);
}

Bureaucrat::~Bureaucrat(){
    std::cout << "destructor called "<< std::endl;
}

void Bureaucrat::getExeption(void) const {
    if(Grade < highergrade)
        throw GradeTooHighException();
    else if (Grade > lowstgrade)
        throw GradeTooLowException();
}

std::string Bureaucrat::getName(void) const {
    return (this->Name);
}

int Bureaucrat::getGrade(void) const {
    return (this->Grade);
}

void Bureaucrat::increment(int value){
    this->Grade -= value;
    getExeption();
}

void Bureaucrat::decrement(int value){
    this->Grade += value;
    getExeption();
}

std::ostream &operator << (std::ostream &os, const Bureaucrat &a){
    os << a.getName() << " bureaucrat grade" << a.getGrade() << ".";
    return (os);
}
// const char* Bureaucrat::GradeTooHighException::what(){
//     return ("grade too high ");
// }

// const char* Bureaucrat::GradeTooLowException::what(){
//     return ("grade too low ");
// }