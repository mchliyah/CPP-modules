/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:23:42 by mchliyah          #+#    #+#             */
/*   Updated: 2022/09/28 20:33:35 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHord.hpp"


int main()
{

    srand(time(NULL));
    int randnumbr = rand() % 20;

    Zombie *head = zombieHorde(randnumbr, "test");
    delete [] head;
    return (0);
}