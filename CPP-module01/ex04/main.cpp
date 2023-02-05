/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:17:30 by mchliyah          #+#    #+#             */
/*   Updated: 2022/09/29 14:17:37 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    std::string s1;
    std::string s2;
    std::string extention;
    std::string outname;
    std::string strin;
    int index;

    if (ac == 4)
    {
        extention = ".replace";
        outname = av[1] + extention;
        std::ifstream readfile(av[1]);
        std::ofstream outfile(outname);
        s1 = av[2];
        s2 = av[3];
        if (!readfile)
        {
            std::cerr << "no file exist !!"<< std::endl;
            return (1);
        }
        while(readfile)
        {
            index = -1;
            if (std::getline(readfile, strin))
            {
                index = strin.find(s1);
                if (index != -1)
                {
                    strin.erase(index, s1.length());
                    strin.insert(index, s2);
                }
                outfile << strin << std::endl;
            }
        }
    }
    return (0);
}