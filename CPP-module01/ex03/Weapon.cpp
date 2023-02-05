/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:27:15 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/03 00:55:13 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
    this->type = type;
}

Weapon::~Weapon(){}

void Weapon::setType(std::string type){
    this->type = type;
}   

std::string Weapon::getType(void){
    return (this->type);
}
