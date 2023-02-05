/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:27:12 by mchliyah          #+#    #+#             */
/*   Updated: 2022/09/29 13:57:59 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class   HumanA
{
    private:
    std::string name;
    Weapon&      weap;
    public:
    HumanA(std::string name, Weapon& weap);
    ~HumanA();

    void    setName(std::string name);
    void    setWep(Weapon  weap);

    std::string getName(void);
    Weapon getWeap(void);

    void    attack(void);
};
