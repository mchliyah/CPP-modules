/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:07:38 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/14 16:50:35 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm;

class RobotomyRequestForm : public Form
{
    private:
        std::string Target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& copy);
        ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(const RobotomyRequestForm& copy);

    // getter - Setter
        std::string getTarget(void) const ;
        void setTarget(std::string target);
    // Additionnal
    void execute(Bureaucrat const & executor) const;
    // Exceptions
};

// FUNCTIONS SUP PROTOYPES =====================================================

#endif
