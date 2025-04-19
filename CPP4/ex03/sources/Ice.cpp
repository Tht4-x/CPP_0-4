/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:57:39 by dancel            #+#    #+#             */
/*   Updated: 2025/04/14 23:10:26 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"

// CONSTRUCTEURS :
//================
Ice::Ice() : _type("ice")
{std::cout << "Ice default constructor called" << std::endl;}

Ice::Ice(const Ice &other) : _type(other.getType())
{std::cout << "Ice copy constructor called" << std::endl;}

Ice	&Ice::operator=(const Ice &other)
{
	{{std::cout << "Ice assignation operator called" << std::endl;}}
	this->setType(other.getType());
	return (*this);
}

Ice::~Ice()
{std::cout << "Ice destructor called" << std::endl;}

// SETTER/GETTER :
//================


// METHODES :
//===========

AMateria* Ice::clone() const {return (new Ice(*this));}

void Ice::use(ICharacter& target)
{std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;}

//std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;