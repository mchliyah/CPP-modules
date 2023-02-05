/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 23:12:06 by mchliyah          #+#    #+#             */
/*   Updated: 2022/09/28 16:37:22 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
    private:
    std::string name;  
    public:
    Zombie();
    Zombie(const std::string &name);
    ~Zombie();
    void    announce(void);
};
    Zombie  *newZombie(std::string name);
    void    randomChump(std::string name);