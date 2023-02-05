/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:07:38 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/14 16:50:35 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form;
class Bureaucrat;

class Form
{
    private:
    const   std::string Name;
    bool    Is_signed;
    const int Signe_grade;
    const int Execute;
    static const int         lowstgrade = 150;
    static const int         highergrade = 1;
    public:
        Form();
        Form(std::string name, const int sgrade, const int exec);
        Form(Form& copy);
        virtual ~Form();
        Form &operator=(const Form& copy);

        // getter - Setter
    const std::string getName(void) const ;
    const int getSignedgrade(void) const ;
    const int getExecute(void) const ; 
    bool getIssigned(void) const;
    void getExeption(void ) const ;

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

    // ADDITIONNAL =================================================================

    void beSigned(const Bureaucrat &b);
};

// FUNCTIONS SUP PROTOYPES =====================================================
std::ostream &operator << (std::ostream &os, const Bureaucrat &a);

#endif
