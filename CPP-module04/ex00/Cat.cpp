/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:43:00 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/02 16:34:02 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    Type = "CAT";
    std::cout << "default constructer called " << std::endl;
}

Cat::Cat(std::string type){
    std::cout << "constructer called " << std::endl;
    this->Type = type;
}

Cat::Cat(Cat &cat){
    std::cout << "coppy constructer called " << std::endl;
    *this = cat;
}
Cat& Cat::operator = (Cat &cat){
    std::cout << "assigne operator called " << std::endl;
    this->Type = cat.Type;
    return (*this);
}

void Cat::makeSound() const {
    std::cout<< this->Type <<  "  say meaow"<< std::endl;
}
Cat::~Cat(){
    std::cout << "destructor called " << std::endl;
}
