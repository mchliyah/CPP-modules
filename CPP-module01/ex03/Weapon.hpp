/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:26:26 by mchliyah          #+#    #+#             */
/*   Updated: 2022/09/28 23:17:20 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
  private:
  std::string   type;
  public:
  Weapon(std::string type);
  ~Weapon();
  void setType(std::string type);
  std::string getType(void);
};

// _Weapon Weapon(std::string name);
#endif