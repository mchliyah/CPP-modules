/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:25:33 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/02 16:33:40 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    Type = "uknown animal type";
    std::cout<< "drfault constructor called "<< std::endl;
}

Animal::Animal(std::string type) {
    this->Type = type;
    std::cout<< "constructor called " << std::endl;
}

Animal::Animal(Animal &animal) {
    *this = animal;
    std::cout << "copy constructor called " << std::endl;
}

Animal& Animal::operator = (Animal &animal) {
    this->Type = animal.Type;
    return (*this);
}

Animal::~Animal(){
    std::cout<< "destructor called "<< std::endl;
}

void Animal::SetType(std::string type){
    this->Type = type;
}

std::string Animal::GetType(void) const {
    return (this->Type);
}

void Animal::makeSound(void) const {
        std::cout<<"unknown animal sound "<< std::endl;
}