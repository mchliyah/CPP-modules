/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:25:12 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/12 23:22:11 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"

class Animal
{
    protected:
    std::string Type;
    public:
    Animal();
    Animal(std::string type);
    Animal(Animal &animal);
    Animal& operator = (Animal &animal);
    virtual ~Animal();

    void SetType(std::string type);
    virtual std::string GetType(void) const ;
    virtual void makeSound(void) const = 0;
};

#endif