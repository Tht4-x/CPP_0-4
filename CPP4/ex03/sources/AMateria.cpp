/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:57:39 by dancel            #+#    #+#             */
/*   Updated: 2025/04/15 00:51:42 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
//#include "ICharacter.hpp"

// CONSTRUCTEURS :
//================
AMateria::AMateria() : _type("undefined")
{std::cout << "AMateria default constructor called" << std::endl;}

AMateria::AMateria(std::string const & type) : _type(type)
{std::cout << "AMateria default constructor called for " << this->getType() << std::endl;}

AMateria::AMateria(const AMateria &other) : _type(other.getType())
{std::cout << "AMateria copy constructor called" << std::endl;}

AMateria	&AMateria::operator=(const AMateria &other)
{
	std::cout << "AMateria assignation operator called" << std::endl;
	this->setType(other.getType());
	return (*this);
}

AMateria::~AMateria()
{std::cout << "AMateria destructor called" << std::endl;}

// SETTER/GETTER :
//================
std::string	const &AMateria::getType() const {return(this->_type);}
void		AMateria::setType(std::string type) {this->_type = type;}

// METHODES :
//===========
void AMateria::use(ICharacter& target) {(void)target;}

