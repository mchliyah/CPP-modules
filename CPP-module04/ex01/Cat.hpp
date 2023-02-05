/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:41:51 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/02 16:34:58 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
    Brain *brain;
    public:
    Cat();
    Cat(std::string type, std::string idea);
    Cat(Cat &Cat);
    Cat& operator = (Cat &Cat);
    void makeSound(void) const ;
    ~Cat();

    Brain* GetBrain(void) const;
    void SetBrain(Brain* brain);
};

#endif