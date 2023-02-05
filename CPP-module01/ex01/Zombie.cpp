/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 23:15:38 by mchliyah          #+#    #+#             */
/*   Updated: 2022/09/28 20:38:25 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
    if (this->name != "Foo")
        std::cout<<"<";
    std::cout<<this->name;
    std::cout<<" " << this->number;
    if (this->name != "Foo")
        std::cout<<">";
    std::cout<<": BraiiiiiiinnnzzzZ...";
    std::cout<<std::endl;
}

Zombie::Zombie(void){}

// Zombie::Zombie(const std::string &name){
//     this->name = name;
// }

Zombie::~Zombie()
{
    std::cout<< this->name <<" "<< this->number << " is dead !" << std::endl;
}

void Zombie::setName(std::string name){
    this->name = name;
}

void Zombie::setNumber(int number){
    this->number = number;
}

int Zombie::getNumber(void){
    return (this->number);
}

std::string Zombie::getName(){
    return (this->name);
}