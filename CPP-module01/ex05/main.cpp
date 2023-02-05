/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 22:21:51 by mchliyah          #+#    #+#             */
/*   Updated: 2022/09/30 00:01:28 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
     Harl harl;

     harl.complain("DEBUG");
     std::cout<<std::endl;
     harl.complain("INFO");
     std::cout<<std::endl;
     harl.complain("WARNING");
     std::cout<<std::endl;
     harl.complain("ERROR");
     std::cout<<std::endl;
     harl.complain("TEST");

     return (0);
}