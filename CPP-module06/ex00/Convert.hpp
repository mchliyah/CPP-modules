/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:07:38 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/14 16:50:35 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>

class Convert;

class Convert
{
    private:
        std::string Num;
    public:
        Convert();
        Convert(std::string num);
        Convert(const Convert& copy);
        virtual ~Convert();
        Convert &operator=(const Convert& copy);

        // Getter - Setter
        std::string getNum() const{
            return (this->Num);
        }
        // Additionnal

        float tofloat() {
            if (Num.length() == 1 && !isdigit(Num[0]))
                return (static_cast<float>(Num[0]));
            return (static_cast<float>(std::stof(Num)));
        }

        int toint(){
            if (Num.length() == 1 && !isdigit(Num[0]))
                return (static_cast<int>(Num[0]));
            return (static_cast<int>(std::stof(Num)));
        }
        char tochar(){
            if (!isprint(static_cast<char>(Num[0])))
                throw ("char: impossible");
            if (Num.length() == 1 && !isdigit(Num[0]))
                return (static_cast<char>(Num[0]));
            return (static_cast<char>(std::stof(Num)));
        }

    
        double todouble(){
            if (Num.length() == 1 && !isdigit(Num[0]))
                return (static_cast<double>(Num[0]));
            return (static_cast<double>(std::stof(Num)));
        }

        // Exceptions
};

// FUNCTIONS SUP PROTOYPES =====================================================

#endif
