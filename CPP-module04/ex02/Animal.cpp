/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:25:33 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/12 23:21:29 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    Type = "uknown animal type";
    std::cout<< "animal drfault constructor called "<< std::endl;
}

Animal::Animal(std::string type) {
    this->Type = type;
    std::cout<< "animal constructor called " << std::endl;
}

Animal::Animal(Animal &animal) {
    *this = animal;
    std::cout << "animal coppy constructor called " << std::endl;
}

Animal& Animal::operator = (Animal &animal) {
    this->Type = animal.Type;
    return (*this);
}

Animal::~Animal(){
    std::cout<< "animal destructor called "<< std::endl;
}

void Animal::SetType(std::string type){
    this->Type = type;
}

std::string Animal::GetType(void) const {
    return (this->Type);
}
