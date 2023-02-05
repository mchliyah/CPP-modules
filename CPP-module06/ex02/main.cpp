/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:05:39 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/22 18:16:37 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void){
	
	srand(std::time(NULL));
	int choice = rand() % 3;

    if (choice == 2)
		return (new A());
	else if (choice == 1)
		return (new B());
	else
		return (new C());
}

void identify(Base& p){
    Base tray;
    try {
        tray = dynamic_cast<A &>(p);
        std::cout << " the object pointed to by p is A"<< std::endl;
    }
    catch(const std::exception& e){}
    try
    {
    
        tray = dynamic_cast<B &>(p);
            std::cout << " the object pointed to by p is B"<< std::endl;
    }
    catch(const std::exception& e){}
    try
    {

        tray = dynamic_cast<C &>(p);
            std::cout << " the object pointed to by p is C"<< std::endl;
    }
    catch(const std::exception& e){}
    
}


void identify(Base* p)
{
    if (dynamic_cast<A *>(p) != NULL)
        std::cout << " the object pointed to by p is A"<< std::endl;
    else if (dynamic_cast<B *>(p) != NULL)
        std::cout << " the object pointed to by p is B"<< std::endl;
    else if (dynamic_cast<C *>(p) != NULL)
        std::cout << " the object pointed to by p is C"<< std::endl;
}

int main(){
    

    Base *test;
    test = generate();

    identify(test);
    identify(*test);
    
    delete test;
    return (0);
}