/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 22:33:11 by mchliyah          #+#    #+#             */
/*   Updated: 2022/09/23 23:05:43 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook(void){}
phonebook::~phonebook(void){}

void phonebook::setContact(contact cont, int index)
{
    this->contacts[index] = cont;
}

contact phonebook::getContact(int index){
    return(this->contacts[index]);
}

void phonebook::searchPrint(int limit)
{
    std::cout << std::setfill(' ') << std::setw(10) << "index" << " | ";
    std::cout << std::setfill(' ') << std::setw(10) << "first_name" << " | ";
    std::cout << std::setfill(' ') << std::setw(10) << "last_name" << " | ";
    std::cout << std::setfill(' ') << std::setw(10) << "nickname" << " | " << std::endl;
    for (int n = 0; n < limit; n++)
    {    
        std::cout << std::setfill(' ') << std::setw(10) << n << " | ";
        getContact(n).serchprint();
    }
}

void    phonebook::printContact(int index)
{
    getContact(index).print();
}