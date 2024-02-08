/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:46:06 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/28 21:59:54 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void iter(T *array, unsigned int lenth, void(*f) (T &elemnt)){
	if (array)
	{
    	for (unsigned int i = 0; i< lenth; i++)
    	    (*f)(array[i]);
	}
}

template<typename T>
void iter(T *array, unsigned int lenth, void(*f) (const T &elemnt)){
	if (array)
	{
    	for (unsigned int i = 0; i< lenth; i++)
    	    (*f)(array[i]);
	}
}

template<typename T>
void increment(T &value) {
	value++;
}

template<typename T>
void decrement(T &value) {
	value--;
}
// template<typename T>
// void print(T &value) {
// 	std::cout <<" "<< value<<" ";
// }
