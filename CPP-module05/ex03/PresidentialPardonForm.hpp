/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:07:38 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/14 16:50:35 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm;

class PresidentialPardonForm : public Form
{
    private:
        std::string Target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& copy);
        ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(const PresidentialPardonForm& copy);
    // getter - setter
        std::string getTarget(void) const ;
        void setTarget(std::string target);
    // Additionnal
        void    execute(Bureaucrat const & executor) const;
    // Exceptions
};

// FUNCTIONS SUP PROTOYPES =====================================================

#endif
