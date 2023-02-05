/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:04:03 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/31 20:14:44 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain() {
	for (int i = 0; i < 100; i++)
		ideas[i] = "unknown idea";
	std::cout <<"brain default constructor call"<< std::endl;
}
Brain::Brain(std::string idea){
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
	std::cout <<"brain constructor call"<< std::endl;
}

Brain::Brain(const Brain& copy) { 
	this->operator=(copy);
	std::cout <<"brain copy constructor call"<< std::endl;

}

Brain::~Brain() {
	// delete this;
	std::cout<< "brain distructor called "<< std::endl;
}

Brain & Brain::operator=(const Brain& op)
{
	if (this == &op)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = op.ideas[i];
	return (*this);
	std::cout <<"brain assignment call"<< std::endl;
}

// std::string Brain::GetIdeas(void) const {
// 	return (this->ideas);
// }

// void Brain::SetIdeas(std::string idea){
// 	for (int i = 0; i < 100; i++)
// 		this->ideas[i] = idea;
// }
