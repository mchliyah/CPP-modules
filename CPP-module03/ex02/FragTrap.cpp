/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:15:14 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/07 22:46:37 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
    ClapTrap::SetHit(100);
    ClapTrap::SetEnery_point(100);
    ClapTrap::SetAttack_damage(30);
    std::cout << "Frag default constructor called !" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
    ClapTrap::SetHit(100);
    ClapTrap::SetEnery_point(100);
    ClapTrap::SetAttack_damage(30);
    std::cout<< "Frag constructor called !"<< std::endl;
}

FragTrap::FragTrap(FragTrap &scav){
    *this = scav;
    std::cout<< "Frag coppy constructor called !" << std::endl;
}

FragTrap& FragTrap::operator = (const FragTrap &comming){
    SetName(comming.getName());
    SetHit(comming.getHit());
    SetEnery_point(comming.getEnergy_point());
    SetAttack_damage(comming.getAttck_damage());
    std::cout<< "Frag assigne called" << std::endl;
    return (*this);
}

FragTrap::~FragTrap(){
    std::cout<< "Frag destructor called !" << std::endl;
}

void FragTrap::guardGate(void){
    std::cout<< "FragTrap is now in Gate keeper mode" << std::endl;
}
