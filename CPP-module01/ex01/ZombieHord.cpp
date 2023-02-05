/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHord.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:25:15 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/03 00:54:08 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHord.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    Zombie *Zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        Zombies[i].setName(name);
        Zombies[i].setNumber(i + 1);
        Zombies[i].announce();
    }
    return (Zombies);
}
