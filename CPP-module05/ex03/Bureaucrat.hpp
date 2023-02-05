/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 23:39:43 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/17 23:26:09 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Bureaucrat;
class Form;

class Bureaucrat
{
    private:
    const std::string Name;
    int               Grade;
    static const int         lowstgrade = 150;
    static const int         highergrade = 1;
    public:
    Bureaucrat(void);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat &copy);
    Bureaucrat &operator=(Bureaucrat& copy);
    ~Bureaucrat();

    //geters
    int getGrade(void) const ;
    std::string getName(void) const ;
    void getExeption(void ) const ;

//increment & decrement

    void increment(int value);
    void decrement(int value);

//exeptions class

    //too high exception
    class GradeTooHighException : public std::exception
    {
        public:
        const char* what() const throw(){
            return ("grade too high ");
        }

    };

//too low exception  
    class GradeTooLowException : public std::exception
    {
        public:
        const char* what() const throw(){
            return ("grade too low ");
        }
    };

    void signForm(const Form &f) const;
    void execution(const Form &f) const ;
};

std::ostream &operator << (std::ostream &os, const Bureaucrat &a);

#endif