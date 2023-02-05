/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 21:55:13 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/12 21:58:54 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Brain.hpp"

WrongCat::WrongCat() {
    Type = "WrongCat";
    brain = new Brain();
    std::cout << "WrongCat default constructer called " << std::endl;
}

WrongCat::WrongCat(std::string type, std::string idea){
    this->brain = new Brain(idea);
    this->Type = type;
    std::cout << "WrongCat constructor called " << std::endl;
}

WrongCat::WrongCat(WrongCat &WrongCat){
    *this = WrongCat;
    std::cout << "WrongCat coppy constructor called " << std::endl;
}
WrongCat& WrongCat::operator = (WrongCat &WrongCat){
    if (this->brain)
        delete this->brain;
    this->brain = new Brain();
    this->Type = WrongCat.Type;
    std::cout << "WrongCat assigne operator called " << std::endl;
    return (*this);
}

void WrongCat::makeSound() const {
    std::cout<< this->Type <<  " say meaow"<< std::endl;
}

Brain* WrongCat::GetBrain(void) const {
    return (this->brain);
}

void    WrongCat::SetBrain(Brain* brain){
    this->brain = brain;
}

WrongCat::~WrongCat(){
    delete brain;
    std::cout << "WrongCat destructor called " << std::endl;
}
