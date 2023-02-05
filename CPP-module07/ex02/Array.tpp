/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 21:30:27 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/30 19:55:24 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


template <typename T>
Array<T>::Array() : length(0){
    element = new T;
    std::cout << "template default constructor called"<< std::endl;
}

template <typename T>
Array<T>::Array(unsigned int len){
    length = len;
    element = new T[len];
    for (unsigned int i = 0; i < this->length ; i++)
        this->element[i] = 0;
    std::cout << "template constructor called"<< std::endl;
}

template <typename T>
Array<T>::Array(Array<T> const &copy){
    std::cout << "template copy constructor called"<< std::endl;
    *this = copy;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &other){
    std::cout << "template copy assignement operator called"<< std::endl;
    if (this->element)
        delete [] this->element;
    element = nullptr;
    this->length = other.size();
    this->element = new T[length];
    for (unsigned int i = 0; i < this->length ; i++)
        this->element[i] = other.element[i];
    return (*this);
}

template <typename T>
T&  Array<T>::operator[](int indx) const {
    if (indx < 0 || static_cast <unsigned int>(indx) >= this->length)
        throw out_of_boundsexception();
    return (this->element[indx]);
}
 
template <typename T>
unsigned int Array<T>::size(void) const {
    return (this->length);
}

template <typename T>
Array<T>::~Array(){
    std::cout << "template destructor called"<< std::endl;
    if (element)
        delete [] element;
}