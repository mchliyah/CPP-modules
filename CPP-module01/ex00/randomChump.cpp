/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 20:49:52 by mchliyah          #+#    #+#             */
/*   Updated: 2022/09/28 15:49:07 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name )
{
    // Zombie newZombie(name);
    // newZombie.announce();

    Zombie *newone = newZombie(name);
    newone->announce();
    delete newone;

}