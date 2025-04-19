/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:57:39 by dancel            #+#    #+#             */
/*   Updated: 2025/04/14 23:10:26 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

// CONSTRUCTEURS :
//================
WrongCat::WrongCat() : _type("WrongCat")
{std::cout << "WrongCat default constructor called" << std::endl;}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{std::cout << "WrongCat copy constructor called" << std::endl;}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	{{std::cout << "WrongCat assignation operator called" << std::endl;}}
	this->setType(other.getType());
	return (*this);
}

WrongCat::~WrongCat()
{std::cout << "WrongCat destructor called" << std::endl;}

// SETTER/GETTER :
//================

// METHODES :
//===========

void WrongCat::makeSound() const 
{std::cout << "Wrong Meow meow!" << std::endl;}




