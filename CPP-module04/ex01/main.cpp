/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:54:40 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/12 22:28:10 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j;
    const Dog* dog = new Dog();
    const Animal* i = new Cat();
    j = dog;
    const WrongAnimal* wroncat = new WrongCat();
    std::cout << i->GetType() << " " << std::endl;
    std::cout << j->GetType() << " " << std::endl;
    std::cout << meta->GetType() << " " << std::endl;
    std::cout << wroncat->GetType() << " " << std::endl;
    meta->makeSound(); //will output the cat sound!
    i->makeSound();
    j->makeSound();
    wroncat->makeSound();
   
    delete i;
    delete j;
    delete meta;
    delete wroncat;
    // system("leaks a.out");
    return 0;
}