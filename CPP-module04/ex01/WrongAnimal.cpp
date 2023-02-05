/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 21:51:11 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/12 23:26:53 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    Type = "uknown WrongAnimal type";
    std::cout<< "WrongAnimal drfault constructor called "<< std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {
    this->Type = type;
    std::cout<< "WrongAnimal constructor called " << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &WrongAnimal) {
    *this = WrongAnimal;
    std::cout << "WrongAnimal coppy constructor called " << std::endl;
}

WrongAnimal& WrongAnimal::operator = (WrongAnimal &WrongAnimal) {
    this->Type = WrongAnimal.Type;
    return (*this);
}

WrongAnimal::~WrongAnimal(){
    std::cout<< "WrongAnimal destructor called "<< std::endl;
}

void WrongAnimal::SetType(std::string type){
    this->Type = type;
}

std::string WrongAnimal::GetType(void) const {
    return (this->Type);
}

void WrongAnimal::makeSound(void) const {
        std::cout<<"WrongAnimal sound "<< std::endl;
}