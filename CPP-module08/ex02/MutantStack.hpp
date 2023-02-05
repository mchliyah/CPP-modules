/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:07:38 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/18 22:28:16 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>


template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        // MutantStack(/*paraam*/);
        MutantStack(const MutantStack& copy);
        ~MutantStack();
        MutantStack &operator=(const MutantStack& copy);

};

#include "MutantStack.tpp"

#endif
