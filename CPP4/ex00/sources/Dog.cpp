/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:57:39 by dancel            #+#    #+#             */
/*   Updated: 2025/04/14 23:10:26 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

// CONSTRUCTEURS :
//================
Dog::Dog() : _type("Dog")
{std::cout << "Dog default constructor called" << std::endl;}

Dog::Dog(const Dog &other) : Animal(other)
{std::cout << "Dog copy constructor called" << std::endl;}

Dog	&Dog::operator=(const Dog &other)
{
	{{std::cout << "Dog assignation operator called" << std::endl;}}
	this->setType(other.getType());
	return (*this);
}

Dog::~Dog()
{std::cout << "Dog destructor called" << std::endl;}

// SETTER/GETTER :
//================

// METHODES :
//===========

void Dog::makeSound() const 
{std::cout << "Wouf wouf!" << std::endl;}


