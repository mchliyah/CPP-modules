/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:43:27 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/12 21:49:46 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    Type = "DOG";
    brain = new Brain();
    std::cout << "dog default constructor called " << std::endl;
}

Dog::Dog(std::string type, std::string idea){
    this->Type = type;
    this->brain = new Brain(idea);
    std::cout << "dog constructor called " << std::endl;
}

Dog::Dog(Dog &dog){
    *this = dog;
    std::cout << "dog coppy constructor called " << std::endl;
}

Dog& Dog::operator = (Dog &dog){
    if (this->brain)
        delete this->brain;
    this->brain = new Brain();
    this->Type = dog.Type;
    std::cout << "dog assigne operator called " << std::endl;
    return (*this);
}

void Dog::makeSound() const {
    std::cout<< this->Type <<  "  bark"<< std::endl;
}

Brain* Dog::GetBrain(void) const{
    return (this->brain);
}

void Dog::SetBrain(Brain* brain){
    this->brain = brain;
}

Dog::~Dog(){
    delete brain;
    std::cout << " dog destructor called " << std::endl;
}
