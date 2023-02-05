/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:05:39 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/22 18:17:37 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(){

    Data * test = new Data("mchliyah", 55);
    Data *after;

    uintptr_t i = 0;
    std::cout<< "i = " << i << std::endl;
    i = serialize(test);
    std::cout<< "i = " << i << std::endl;
    after = deserialize(i);
    std::cout<<"name after desirealize "<<  after->getName() << std::endl;

    return (0);
}