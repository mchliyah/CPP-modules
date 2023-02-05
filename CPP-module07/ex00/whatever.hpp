/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:20:49 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/25 10:58:16 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>

void swap(T &x, T &y){
    T tmp;

    tmp = x;
    x = y;
    y = tmp;
}

template <typename T>
T &min(T &x , T &y){
    return (x <= y) ? x : y;
}

template <typename T>
T &max(T &x , T &y){
    return (x >= y) ? x : y;
}