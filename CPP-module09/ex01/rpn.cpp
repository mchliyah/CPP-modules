/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:52:29 by mchliyah          #+#    #+#             */
/*   Updated: 2023/03/20 23:31:40 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn.hpp"

RPN::RPN() {}

RPN::RPN(RPN const &src) { *this = src; }

RPN::~RPN() {}

RPN &RPN::operator=(RPN const &rhs) {
	if (this != &rhs) {}
	return *this;
}

double RPN::rpn(std::string const &input) {
	std::stack<double> st;
	int i = 0;

	
	if (input.empty())
		throw std::runtime_error("Empty input!");
	if (input.size() == 1 && !isdigit(input[0]))
		throw std::runtime_error("Invalid input!");
	if (input.find_first_not_of("0123456789+-*/ ") != std::string::npos)
		throw std::runtime_error("Invalid input!");
	//check if the first and the second char are not operators
	if (input[0] == '+' || input[0] == '-' || input[0] == '*' || input[0] == '/'
		|| input[2] == '+' || input[2] == '-' || input[2] == '*' || input[2] == '/')
		throw std::runtime_error("Invalid input!");
	while (input[i]) {
		if (input[i] == ' ') {
			i++;
			continue;
		}
		if (isdigit(input[i])) {
			std::stringstream ss;
			while (isdigit(input[i])) {
				ss << input[i];
				i++;
			}
			double num;
			ss >> num;
			st.push(num);
		} else {
			double b = st.top();
			st.pop();
			double a = st.top();
			st.pop();
			st.push(calc(a, b, input[i]));
			i++;
		}
	}
	return (st.top());
}

double RPN::calc(double a, double b, char op) {
	switch (op) {
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '*':
			return a * b;
		case '/':
			return a / b;
		default:
			return 0;
	}
}