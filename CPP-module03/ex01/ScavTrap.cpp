/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:15:14 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/07 22:46:37 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "scav default constructor called !" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
    ClapTrap::SetHit(100);
    ClapTrap::SetEnery_point(50);
    ClapTrap::SetEnery_point(20);
    std::cout<< "scav constructor called !"<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap &scav){
    *this = scav;
    std::cout<< "scav coppy constructor called !" << std::endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap &comming){
    SetName(comming.getName());
    SetHit(comming.getHit());
    SetEnery_point(comming.getEnergy_point());
    SetAttack_damage(comming.getAttck_damage());
    std::cout<< "Frag assigne called" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap(){
    std::cout<< "scav destructor called !" << std::endl;
}

void ScavTrap::guardGate(void){
    std::cout<< "ScavTrap is now in Gate keeper mode" << std::endl;
}
