/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 22:22:22 by mchliyah          #+#    #+#             */
/*   Updated: 2022/09/30 00:28:58 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){}

Harl::~Harl(void){}

void Harl::debug(void){
    std::cout<< "I love having extra bacon for my 7XL-double-cheese-triple-";
    std::cout<<"pickle-specialketchup burger. I really do!" << std::endl;    
}

void Harl::info(void){
    std::cout<< "I cannot believe adding extra bacon costs more money. You didn’t put";
    std::cout<<"enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void Harl::warning(void){
    std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for";
    std::cout<<"years whereas you started working here since last month."<<std::endl;
}

void Harl::error(void){
    std::cout<<"This is unacceptable! I want to speak to the manager now." << std::endl;    
}

void Harl::complain(std::string level)
{
    void (Harl::*complaining[])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error,
   };

    std::string coises[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        void (Harl::*complaincase)(void) = complaining[i];
        if (coises[i] == level)
            (this->*complaincase)();
    }
}

