/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:57:39 by dancel            #+#    #+#             */
/*   Updated: 2025/04/15 00:51:42 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// CONSTRUCTEURS :
//================
Animal::Animal() : _type("undefined")
{std::cout << "Animal default constructor called" << std::endl;}

Animal::Animal(std::string type) : _type(type)
{std::cout << "Animal default constructor called for " << this->getType() << std::endl;}

Animal::Animal(const Animal &other) : _type(other.getType())
{std::cout << "Animal copy constructor called" << std::endl;}

Animal	&Animal::operator=(const Animal &other)
{
	std::cout << "Animal assignation operator called" << std::endl;
	this->setType(other.getType());
	return (*this);
}

Animal::~Animal()
{std::cout << "Animal destructor called" << std::endl;}

// SETTER/GETTER :
//================
std::string	Animal::getType() const {return(this->_type);}
void		Animal::setType(std::string type) {this->_type = type;}

// METHODES :
//===========
void	Animal::makeSound() const
{std::cout << "..." << std::endl;}



