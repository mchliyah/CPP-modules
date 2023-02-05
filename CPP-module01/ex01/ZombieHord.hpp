/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHord.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:17:19 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/03 00:54:01 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class ZombieHorde{

private :
	Zombie*	Zombies;
public :
	
	void	announce( Zombie &zombie );
	void	setZombiesNumbre(int numbre);
    	
	int		getZombiesNumbre(void);
	
    Zombie  *newZombie(std::string name);

};

Zombie *zombieHorde( int N, std::string name );
