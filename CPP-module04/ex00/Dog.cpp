/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:43:27 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/02 16:33:45 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    Type = "DOG";
    std::cout << "default constructer called " << std::endl;
}

Dog::Dog(std::string type){
    std::cout << "constructer called " << std::endl;
    this->Type = type;
}

Dog::Dog(Dog &dog){
    std::cout << "coppy constructer called " << std::endl;
    *this = dog;
}
Dog& Dog::operator = (Dog &dog){
    std::cout << "assigne operator called " << std::endl;
    this->Type = dog.Type;
    return (*this);
}
void Dog::makeSound() const {
    std::cout<< this->Type <<  "  bark"<< std::endl;
}

Dog::~Dog(){
    std::cout << "destructor called " << std::endl;
}
