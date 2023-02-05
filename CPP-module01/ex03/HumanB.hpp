/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:28:15 by mchliyah          #+#    #+#             */
/*   Updated: 2022/09/29 13:58:39 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class   HumanB
{
    private:
    std::string name;
    Weapon*      weap;
    public:
    HumanB(std::string name);
    ~HumanB();
    
    void    setName(std::string name);
    void    setWeapon(Weapon&  weap);

    std::string getName(void);
    Weapon& getWeapon(void);

    void    attack(void);
};
