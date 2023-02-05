/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 23:12:06 by mchliyah          #+#    #+#             */
/*   Updated: 2022/09/28 19:40:02 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
    private:
    std::string name;
    int number;  
    public:
    Zombie();
    Zombie(const std::string &name);
    ~Zombie();
    void    announce(void);

    void    setName(std::string name);
    void    setNumber(int number);

    std::string getName(void);
    int     getNumber(void);
};
