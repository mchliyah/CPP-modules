/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 00:42:40 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/05 18:44:41 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
    std::string Name;
    int          Hit;
    int          Energy_points;
    int          Attack_damage;
    public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &coming);
    ClapTrap& operator = (const ClapTrap &comming);
    ~ClapTrap();

    //getrs && seters 
    void SetName(std::string name);
    void SetHit(int hit);
    void SetEnery_point(int energypoint);
    void SetAttack_damage(int attackdamage);

    std::string getName(void) const ;
    int getHit(void) const ;
    int getEnergy_point(void) const ;
    int getAttck_damage(void) const ;

    //other membre fonctions 
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

// std::ostream &operator << (std::ostream &os, const ClapTrap &a);

#endif