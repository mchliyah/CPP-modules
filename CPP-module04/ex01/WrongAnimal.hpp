/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 21:52:13 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/12 21:54:16 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include "Brain.hpp"

class WrongAnimal
{
    protected:
    std::string Type;
    public:
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(WrongAnimal &WrongAnimal);
    WrongAnimal& operator = (WrongAnimal &WrongAnimal);
    virtual ~WrongAnimal();

    void SetType(std::string type);
    std::string GetType(void) const ;
    void makeSound(void) const ;
};

#endif