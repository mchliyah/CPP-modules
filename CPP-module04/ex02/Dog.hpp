/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:40:13 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/02 16:35:06 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    private:
    Brain *brain;
    public:
    Dog();
    Dog(std::string type, std::string idea);
    Dog(Dog &dog);
    Dog& operator = (Dog &dog);
    void makeSound(void) const ;
    ~Dog();

    Brain* GetBrain(void) const;
    void SetBrain(Brain* brain);
};

#endif