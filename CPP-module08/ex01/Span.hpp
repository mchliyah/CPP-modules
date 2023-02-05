/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:07:38 by mchliyah          #+#    #+#             */
/*   Updated: 2022/11/18 22:28:16 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span;

class Span
{
    private:
        unsigned int N;
        unsigned int count;
        std::vector<int> nbrs;
        Span();
    public:
        Span(unsigned int value);
        Span(const Span& copy);
        ~Span();
        Span &operator=(const Span& copy);

        void addNumber(int value);
        unsigned int shortestSpan(void) const;
	    unsigned int longestSpan(void) const;


        class FullSpanException: public std::exception {
		    virtual const char* what() const throw(){
                return ("span is full !!");
            }
	    };
        
        class LowNumbersException: public std::exception {
		    virtual const char* what() const throw(){
                return ("low numbre reached !!");
            }
	    };


        template<typename In_Iter>
	    void addNumber(In_Iter begin, In_Iter end) {
	        if (this->nbrs.size() + std::distance(begin, end) > this->N)
		        throw Span::FullSpanException();
	        this->nbrs.insert(begin, end);
        }
};

#endif
