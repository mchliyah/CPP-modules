/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:07:38 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/14 16:50:35 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm;

class ShrubberyCreationForm : public Form
{
    private:
        std::string Target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& copy);
       ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm& copy);
    // getter - Setter
        std::string getTarget(void) const ;
        void setTarget(std::string target);
    // Additionnal
    void execute(Bureaucrat const & executor) const;
    // Exceptions
};

// FUNCTIONS SUP PROTOYPES =====================================================

#endif
