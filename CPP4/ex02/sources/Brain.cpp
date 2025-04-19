/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 01:26:42 by dancel            #+#    #+#             */
/*   Updated: 2025/04/15 02:06:54 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// CONSTRUCTEURS :
//================
Brain::Brain()
{std::cout << "Brain default constructor called" << std::endl;}

Brain::Brain(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		this->setIdea(i, other.getIdea(i));
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &other)
{
//	delete _ideas;
	for (int i = 0; i < 100; i++)
		this->setIdea(i, other.getIdea(i));
	std::cout << "Brain assignation operator called" << std::endl;
	return (*this);
}

Brain::~Brain()
{std::cout << "Brain destructor called" << std::endl;}

// SETTER/GETTER :
//================
std::string	Brain::getIdea(int i) const 
{
	if (i >= 0 && i <= 99)
		return(this->_ideas[i]);
	return (NULL);
}

void		Brain::setIdea(int i, std::string idea)
{
	if (i >= 0 && i <= 99)
		this->_ideas[i] = idea;
}

// METHODES :
//===========
