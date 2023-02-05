/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 00:42:46 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/05 19:08:38 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap obj;
    ClapTrap obj2("simo");

    obj = obj2;
    std::cout << "name obj is "<< obj.getName() << " and abj2 name is "<< obj2.getName() << std::endl;
    obj.attack(obj2.getName());
    obj2.takeDamage(1);
    obj2.beRepaired(1);
    std::cout<< "obj info " << std::endl;
    std::cout <<"name  "<< obj.getName() << std::endl;
    std::cout <<"hit "<< obj.getHit() << std::endl;
    std::cout <<"energy " <<  obj.getEnergy_point() << std::endl;
    std::cout << "damage " << obj.getAttck_damage() << std::endl;

    std::cout<< "obj2 info " << std::endl;
    std::cout <<"name  "<< obj2.getName() << std::endl;
    std::cout <<"hit "<< obj2.getHit() << std::endl;
    std::cout <<"energy " <<  obj2.getEnergy_point() << std::endl;
    std::cout << "damage " << obj2.getAttck_damage() << std::endl;
    return (0);
}