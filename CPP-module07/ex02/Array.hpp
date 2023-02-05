/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:25:52 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/30 19:53:02 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>
# include <iostream>
# include <exception>

template<typename T>

class Array
{
private:
	unsigned int length;
	T *element;
public:
	Array();
	Array(unsigned int len);
	Array(Array<T> const &copy);
	~Array();
	Array &operator=(Array const &other);

	unsigned int size(void) const ;
	T&  operator[](int indx) const ;

	class out_of_boundsexception : public std::exception
	{
		public:
        const char* what() const throw(){
            return ("index out of bounds !!!");
        }

	};
};

#include "Array.tpp"

#endif