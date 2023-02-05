/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 23:15:38 by mchliyah          #+#    #+#             */
/*   Updated: 2022/09/28 16:38:00 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
    if (this->name != "Foo")
        std::cout<<"<";
    std::cout<<this->name;
    if (this->name != "Foo")
        std::cout<<">";
    std::cout<<": BraiiiiiiinnnzzzZ...";
    std::cout<<std::endl;
}

Zombie::Zombie(void){}

Zombie::Zombie(const std::string &name){
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout<< this->name << "is dead !" << std::endl;
}