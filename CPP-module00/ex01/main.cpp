/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:07:50 by mchliyah          #+#    #+#             */
/*   Updated: 2022/09/24 00:50:44 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int all_spaces(std::string str)
{
    int i = 0;
    if (!str[i])
        return (1);
    while(i < str.length())
    {
        if (str[i] != ' ' || str[i] != '	')
            return(0);
        i++;
    }
    std::cout<< "all spacec !!" << std::endl;
    return (1);    
}

contact fill_firstname(contact cont)
{
    std::string input;

    while (all_spaces(input))
    {
        std::cout<< "inter first name :";
        std::getline(std::cin, input);
        if (input == "")
            break;
        std::cout<< "i got here\n";
    }
    cont.setfirst_name(input);
    return (cont);
}
contact fill_flastname(contact cont)
{
    std::string input;
    
    while (all_spaces(input))
    {
        std::cout<< "inter last name :";
        std::getline(std::cin, input);
		if (input == "")
            break;
    }
    cont.setlast_name(input);
    return (cont);
}

contact fill_nickname(contact cont)
{
    std::string input;
    
    while (all_spaces(input))
    {
        std::cout<< "inter nickname :";
        std::getline(std::cin, input);
		if (input == "")
            break;
    }
    cont.setnickname(input);
    return (cont);
}

contact fill_numbre(contact cont)
{
    std::string input;
    
    while (all_spaces(input))
    {
        std::cout<< "inter phone number :";
        std::getline(std::cin, input);
		if (input == "")
            break;
        // if (!numcheck(input))
        //     std::cout<<"wrooong number !!" << std::endl;
    }
    cont.setphone_number(input);
    return (cont);
}
contact fill_darkestsec(contact cont)
{
    std::string input;
    
    while (all_spaces(input))
    {
        std::cout<< "inter darkest secret :";
        std::getline(std::cin, input);
		if (input == "")
            break;
    }
    cont.setdarkest(input);
    return (cont);
}

contact setinformation(void)
{
    contact cont;
    cont = fill_firstname(cont);
    cont = fill_flastname(cont);
    cont = fill_nickname(cont);
    cont = fill_numbre(cont);
    cont = fill_darkestsec(cont);
    return (cont);
}

int main()
{
    std::string input;
    int         i = 0;
    int         limit = 0;
    phonebook   phon;
    
    // phon.setname("mohammmed  ");
    while (1)
    {
    input = "";
    std::cout<< "cmd : {ADD | SEARCH | EXIT } " << std::endl;
    std::cout<< "inter cmand :"; 
    std::getline(std::cin , input);
    std::cout << std::endl;
    
    if (input == "" || input == "EXIT")
        break ;
	if (input == "ADD")
    {
		phon.setContact (setinformation() , (i++ % 8));
        if (limit <= 7)
            limit++;
    }
	else if (input == "SEARCH")
    {
        if (!limit)
		    std::cout << "no contacts found !!" << std::endl;
        else
        {
            while (1)
            {
                phon.searchPrint(limit);
                std::cout<<std::endl << "select index :";
                std::getline(std::cin, input);
                if (input == "")
                    return (1);
                if (input.length() != 1 || !isdigit(input[0]) || std::stoi(input) < 0 || std::stoi(input) >= limit)
                    std::cout<<"wrong index"<< std::endl;
                else
                {
                    phon.printContact(std::stoi(input));
                    break ;
                }
            }
        }
    }
    }
    return (0);
}