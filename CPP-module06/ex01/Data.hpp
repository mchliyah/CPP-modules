/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:07:38 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/18 22:28:16 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data;

class Data
{
    private:
        std::string Name;
        int Test;
    public:
        Data();
        Data(std::string name, int num);
        Data(const Data& copy);
        ~Data();
        Data &operator=(const Data& copy);

        // Getter - Setter
    std::string getName() const ;
    int getTest() const ;
    
    void setName(std::string name);
    void setTest(int num);


};

Data* deserialize(uintptr_t raw);
uintptr_t serialize(Data* ptr);

#endif
