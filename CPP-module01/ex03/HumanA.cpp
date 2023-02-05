/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:27:03 by mchliyah          #+#    #+#             */
/*   Updated: 2022/09/28 23:46:29 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weap) : name(name), weap(weap){
}

HumanA::~HumanA(){}

void    HumanA::setName(std::string name) {
        this->name = name;
}

std::string HumanA::getName(void) {
    return (this->name);
}

void    HumanA::setWep(Weapon weap){
    this->weap = weap;
}

Weapon HumanA::getWeap(){
    return (this->weap);
}

void HumanA::attack(void) {
    std::cout << getName() << "  attacks with their  "<< getWeap().getType()<< std::endl;    
}