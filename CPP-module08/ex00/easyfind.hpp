/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:20:02 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/29 23:18:30 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <exception>

class noelementexception : public std::exception
{
public:
    const char* what() const throw(){
            return ("element dosn't exist !!");
        }
};


template <typename T>
int easyfind(T vect, int i){
    std::vector<int>::iterator ptr = std::find(vect.begin(), vect.end(), i);
    if (ptr == vect.end())
        throw noelementexception();
    return (std::distance(vect.begin(), ptr));
}
