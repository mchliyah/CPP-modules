/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 20:47:50 by mchliyah          #+#    #+#             */
/*   Updated: 2023/04/06 22:27:20 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


bool is_positive(const char *str)
{
	int value = atoi(str);
	return (strlen(str) > 0 && value >= 0);
}
