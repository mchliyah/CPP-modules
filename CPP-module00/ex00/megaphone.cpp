/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 21:29:57 by mchliyah          #+#    #+#             */
/*   Updated: 2022/09/23 21:22:28 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for(int j = 1; j < ac; j++)
        {
            av++;
            for (size_t i = 0; i < std::strlen(*av); i++)
			     (*av)[i] = std::toupper((*av)[i]);
		    std::cout << *av ;
        }
    }
    std::cout<<"\n";
    return (0);
}