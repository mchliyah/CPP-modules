/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:28:00 by mchliyah          #+#    #+#             */
/*   Updated: 2022/09/29 14:15:44 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weap(nullptr){
}

HumanB::~HumanB(){}

void    HumanB::setName(std::string name) {
        this->name = name;
}

std::string HumanB::getName(void) {
    return (this->name);
}

void    HumanB::setWeapon(Weapon& weap){
    this->weap = &weap;
}

Weapon& HumanB::getWeapon(){
    return (*(this->weap));
}

void HumanB::attack(void) {
    std::cout << getName() << "  attacks with their  "<< getWeapon().getType()<< std::endl;    
}