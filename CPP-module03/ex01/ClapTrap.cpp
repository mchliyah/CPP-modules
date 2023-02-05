/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 00:42:43 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/05 19:08:27 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    Name = "unnamed";
    Hit = 10;
    Energy_points = 10;
    Attack_damage = 0;
    std::cout << "default constructor called !" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    Name = name;
    Hit = 10;
    Energy_points = 10;
    Attack_damage = 0;
    std::cout<< "constructor called !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &coming) {
    *this = coming;
    std::cout<<"Copy constructor called" <<std::endl;
}

ClapTrap& ClapTrap::operator = (const ClapTrap &comming){
    Name = comming.Name;
    Hit= comming.Hit;
    Energy_points = comming.Energy_points;
    Attack_damage = comming.Attack_damage;
    std::cout<< "assigne called" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap(){
    std::cout<< "destructor called !" << std::endl;
}

//seters && getrs


void ClapTrap::SetName(std::string name) {
    Name = name;
}

void ClapTrap::SetHit(int hit) {
    Hit = hit;
}

void ClapTrap::SetEnery_point(int energypoint) {
    Energy_points = energypoint;
}

void ClapTrap::SetAttack_damage(int attackdamage) {
    Attack_damage = attackdamage;
}

std::string ClapTrap::getName(void) const {
    return (this->Name);
}

int ClapTrap::getHit(void) const {
    return (this->Hit);
}

int ClapTrap::getEnergy_point(void) const {
    return (this->Energy_points);
}

int ClapTrap::getAttck_damage(void) const {
    return (this->Attack_damage);
}

//other memmber fonctions
void ClapTrap::attack(const std::string& target){
    if (Hit)
    {
        if (this->Energy_points){
            std::cout<<"ClapTrap "<< this->Name << " attack " << target << " ." << std::endl;
            this->Energy_points--;
        }
        else
            std::cout<<"ClapTrap "<< this->Name<< " can't attack ."<< std::endl;
    }
    else
        std::cout<< "ClapTrap "<< Name<< " already dead !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (Hit)
    {
        std::cout << Name << " took damage of " << amount<<" points !" << std::endl;
        this->Hit -= amount;
        if (Hit <= 0) {
            Hit = 0;
            std::cout << Name << " died !!" << std::endl;
        }
    }
    else
        std::cout<< "ClapTrap "<< Name<< " already dead !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (Hit == 100)
        std::cout<< this->Name<< " allredy repaired !" <<  std::endl;
    else if (Hit)
    {
        if (Energy_points)
        {
            Hit += amount;
            this->Energy_points--;
            std::cout<< this->Name << " is repaired , restoring "<< amount << " Hit points" << std::endl;
        }
        else
            std::cout<< this->Name << " cant be repaired" << std::endl;
    }
    else
        std::cout<< "ClapTrap "<< Name<< " already dead !" << std::endl;
}
