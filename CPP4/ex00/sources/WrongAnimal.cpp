/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:57:39 by dancel            #+#    #+#             */
/*   Updated: 2025/04/15 01:00:42 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// CONSTRUCTEURS :
//================
WrongAnimal::WrongAnimal() : _type("undefined")
{std::cout << "WrongAnimal default constructor called" << std::endl;}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{std::cout << "WrongAnimal default constructor called for " << this->getType() << std::endl;}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other.getType())
{std::cout << "WrongAnimal copy constructor called" << std::endl;}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	this->setType(other.getType());
	return (*this);
}

WrongAnimal::~WrongAnimal()
{std::cout << "WrongAnimal destructor called" << std::endl;}

// SETTER/GETTER :
//================
std::string	WrongAnimal::getType() const {return(this->_type);}
void		WrongAnimal::setType(std::string type) {this->_type = type;}

// METHODES :
//===========
void	WrongAnimal::makeSound() const
{std::cout << "Wrong ..." << std::endl;}

