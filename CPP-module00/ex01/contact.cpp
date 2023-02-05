#include "phonebook.hpp"

contact::contact(void){}
contact::~contact(void){}

std::string contact::adjustline(std::string to_addjust)
{
    if (to_addjust.length() >= 10)
        to_addjust = to_addjust.substr(0, 9).append(".");
    return (to_addjust);
}

void contact::serchprint(void)
{
    std::cout << std::setfill(' ') << std::setw(10) << adjustline(getfirst_name()) << " | ";
    std::cout << std::setfill(' ') << std::setw(10) << adjustline(getlast_name()) << " | ";
    std::cout << std::setfill(' ') << std::setw(10) << adjustline(getnickname()) << " | " << std::endl;
}

void contact::print(void)
{
    std::cout << "first name :" << getfirst_name() << "\n";
    std::cout << "last name :" << getlast_name() << "\n";
    std::cout << "nickname :" << getnickname()<< "\n";
    std::cout << "numbre :" << getphone_number()<< "\n";
    std::cout << "darkest secret :" << getdarkest()<< "\n";
}

 void contact::setfirst_name(std::string str) {
        this->first_name = str;
        std::cout<< "from the seter\n";
    }
    std::string contact::getfirst_name() {
        return(this->first_name);
    }
   // last name
    void contact::setlast_name(std::string str) {
        this->last_name = str;
    }
    std::string contact::getlast_name() {
        return(this->last_name);
    }
    //nicknime 
    void contact::setnickname(std::string str) {
        this->first_name = str;
    }
    std::string contact::getnickname() {
        return(this->first_name);
    }
    //numbr
    void contact::setphone_number(std::string n) {
        this->phone_number = n;
    }
    std::string contact::getphone_number() {
        return(this->phone_number);
    }

    //darkest secret
      void contact::setdarkest(std::string str) {
        this->first_name = str;
    }
    std::string contact::getdarkest() {
        return(this->first_name);
    }