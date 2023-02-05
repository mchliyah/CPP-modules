/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:54:40 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/12 23:24:48 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wroncat = new WrongCat();
    std::cout << i->GetType() << " " << std::endl;
    std::cout << j->GetType() << " " << std::endl;
    std::cout << wroncat->GetType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    wroncat->makeSound();
   
    delete i;
    delete j;
    delete wroncat;
    // system("leaks animal");
    return 0;
}