/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 23:39:38 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/15 16:48:21 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){

    try 
    {   
        const Bureaucrat test("name", 50);
        Form        form("facture", 1, 1);

        test.signForm(form);
        form.beSigned(test); 
    }
    catch(std::exception& e) {
        std::cerr << "error : " << e.what() << std::endl;
    }
    return (0);
}