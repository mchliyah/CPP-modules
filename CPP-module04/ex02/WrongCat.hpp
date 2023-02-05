/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 21:55:15 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/12 22:00:14 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat : public WrongAnimal
{
    private:
    Brain *brain;
    public:
    WrongCat();
    WrongCat(std::string type, std::string idea);
    WrongCat(WrongCat &WrongCat);
    WrongCat& operator = (WrongCat &WrongCat);
    void makeSound(void) const ;
    ~WrongCat();

    Brain* GetBrain(void) const;
    void SetBrain(Brain* brain);
};

#endif