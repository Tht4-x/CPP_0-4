/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:57:39 by dancel            #+#    #+#             */
/*   Updated: 2025/04/14 23:10:26 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

// CONSTRUCTEURS :
//================
Cat::Cat() : _type("Cat"), _brain(new Brain())
{std::cout << "Cat default constructor called" << std::endl;}

Cat::Cat(const Cat &other) : Animal(other), _brain(new Brain(*other._brain))
{std::cout << "Cat copy constructor called" << std::endl;}

Cat	&Cat::operator=(const Cat &other)
{
	delete this->_brain;
	this->_brain = new Brain(*other._brain);
	{{std::cout << "Cat assignation operator called" << std::endl;}}
	this->setType(other.getType());
	return (*this);
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

// SETTER/GETTER :
//================


// METHODES :
//===========

void Cat::makeSound() const 
{std::cout << "Meow meow!" << std::endl;}


