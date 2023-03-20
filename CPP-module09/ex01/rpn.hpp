/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:52:31 by mchliyah          #+#    #+#             */
/*   Updated: 2023/03/20 23:19:32 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <cmath>
#include <exception>


class RPN {
public:
	RPN();
	RPN(RPN const &src);
	~RPN();

	RPN &operator=(RPN const &rhs);

	static double rpn(std::string const &input);
	static double calc(double a, double b, char op);
};

#endif