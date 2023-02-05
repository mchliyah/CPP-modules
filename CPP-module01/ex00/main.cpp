/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 23:05:45 by mchliyah          #+#    #+#             */
/*   Updated: 2022/09/16 23:05:46 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{

	srand (time(NULL));
    std::string testname[8] = {"zombie1", "zombie2", "zombie3","zombie4","zombie5", "Zmbie6", "Zmbie7", "Zmbie8"};
   
    randomChump(testname[rand() % 8]);
    randomChump(testname[rand() % 8]);
    randomChump(testname[rand() % 8]);
    randomChump(testname[rand() % 8]);
   
    Zombie one("test00");
    Zombie two("test01");
    Zombie *tre = newZombie("test02");
    Zombie *fr = newZombie("test03");
    
    one.announce();
    two.announce();
    tre->announce();
    fr->announce();
    
    delete tre;
    delete fr;

    return (0);
}
