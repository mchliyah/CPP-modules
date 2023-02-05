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

class Cat : public Animal
{
    public:
    Cat();
    Cat(std::string type);
    Cat(Cat &Cat);
    Cat& operator = (Cat &Cat);
    void makeSound(void) const ;
    ~Cat();
};

#endif