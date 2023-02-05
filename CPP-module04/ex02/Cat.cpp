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
#include "Brain.hpp"

Cat::Cat() {
    Type = "CAT";
    brain = new Brain();
    std::cout << "cat default constructer called " << std::endl;
}

Cat::Cat(std::string type, std::string idea){
    this->brain = new Brain(idea);
    this->Type = type;
    std::cout << "cat constructor called " << std::endl;
}

Cat::Cat(Cat &cat){
    *this = cat;
    std::cout << "cat coppy constructor called " << std::endl;
}
Cat& Cat::operator = (Cat &cat){
    if (this->brain)
        delete this->brain;
    this->brain = new Brain();
    this->Type = cat.Type;
    std::cout << "cat assigne operator called " << std::endl;
    return (*this);
}

void Cat::makeSound() const {
    std::cout<< this->Type <<  " say meaow"<< std::endl;
}

Brain* Cat::GetBrain(void) const {
    return (this->brain);
}

void    Cat::SetBrain(Brain* brain){
    this->brain = brain;
}

Cat::~Cat(){
    delete brain;
    std::cout << "cat destructor called " << std::endl;
}
