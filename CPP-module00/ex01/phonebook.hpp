/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:59:32 by mchliyah          #+#    #+#             */
/*   Updated: 2022/09/23 22:50:16 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <time.h>
#include <string.h>
#include <iomanip>
#include <ctime>

class contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
public:
    contact();
    ~contact();
    std::string adjustline(std::string to_addjust);
    void print(void);
    void serchprint(void);
    //name 
    void setfirst_name(std::string str);

    std::string getfirst_name();
   // last name
    void setlast_name(std::string str);
    std::string getlast_name();
    //nicknime 
    void setnickname(std::string str);
    std::string getnickname();
    //numbr
    void setphone_number(std::string n);
    std::string getphone_number();

    //darkest secret
      void setdarkest(std::string str);
    std::string getdarkest();
};

class phonebook
{
private:
    contact contacts[8];
public:
    phonebook();
    ~phonebook();
    
    void setContact(contact cont, int index);
    contact getContact(int index);
    void searchPrint(int limit);
    void printContact(int index);
};
    
#endif