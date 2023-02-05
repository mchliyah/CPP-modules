/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 20:53:29 by mchliyah          #+#    #+#             */
/*   Updated: 2022/09/29 13:53:19 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string variable =  "HI THIS IS BRAIN";
    std::string* stringPTR;
    std::string& stringREF = variable;

    stringPTR = &variable;
    std::cout<<"variable  " << variable<< std::endl;
    std::cout<<"adress variable " << &variable<< std::endl;
    std::cout<<"========================"<< std::endl;
    std::cout<<"ptr " << stringPTR << std::endl;
    std::cout<<"adress ptr  " << &stringPTR << std::endl;
    std::cout<<"========================"<< std::endl;
    std::cout<<"stringREF " << stringREF << std::endl;
    std::cout<<"address stringREF " << &stringREF << std::endl;
    return (0);
}