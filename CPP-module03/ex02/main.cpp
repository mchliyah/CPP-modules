/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 00:42:46 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/07 22:47:52 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap obj;
    FragTrap obj2("simo");

    std::cout << "name obj is "<< obj.getName() << " and abj2 name is "<< obj2.getName() << std::endl;
    obj.attack(" someone ");
    obj.attack("someone_else");
    obj.takeDamage(1);
    obj.guardGate();
    std::cout << "==========================="<< std::endl;
    std::cout<< "obj info " << std::endl;
    std::cout <<"name  "<< obj.getName() << std::endl;
    std::cout <<"hit "<< obj.getHit() << std::endl;
    std::cout <<"energy " <<  obj.getEnergy_point() << std::endl;
    std::cout << "damage " << obj.getAttck_damage() << std::endl;
    std::cout << "==========================="<< std::endl;
    obj2.beRepaired(1);
    obj2.takeDamage(10);
    // obj2.beRepaired(20);

    std::cout<< "obj2 info " << std::endl;
    std::cout <<"name  "<< obj2.getName() << std::endl;
    std::cout <<"hit "<< obj2.getHit() << std::endl;
    std::cout <<"energy " <<  obj2.getEnergy_point() << std::endl;
    std::cout << "damage " << obj2.getAttck_damage() << std::endl;
    std::cout << "==========================="<< std::endl;
    return (0);
}