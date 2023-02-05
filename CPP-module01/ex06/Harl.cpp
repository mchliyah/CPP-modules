/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 22:22:22 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/01 15:00:01 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void){
    std::cout<< "[DEBUG]"<< std::endl;
    std::cout<< "I love having extra bacon for my 7XL-double-cheese-triple-";
    std::cout<<"pickle-specialketchup burger. I really do!" << std::endl;    
}

void Harl::info(void){
    std::cout<< "[INFO]"<< std::endl;
    std::cout<< "I cannot believe adding extra bacon costs more money. You didn’t put";
    std::cout<<"enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void Harl::warning(void){
    std::cout<< "[WARNING]"<< std::endl;
    std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for";
    std::cout<<"years whereas you started working here since last month."<<std::endl;
}

void Harl::error(void){
    std::cout<< "[ERROR]"<< std::endl;
    std::cout<<"This is unacceptable! I want to speak to the manager now." << std::endl;    
}

void Harl::complain( std::string level )
{
   switch((level == "DEBUG") + (level == "INFO") * 2
        + (level == "WARNING") * 3 + (level == "ERROR") * 4)
    {
        case 1:
            this->debug();
        case 2:
            this->info();
        case 3:
            this->warning();
        case 4:
            this->error();
            break ;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]"<<std::endl;
    }
}