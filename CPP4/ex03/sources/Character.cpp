/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 03:24:36 by dancel            #+#    #+#             */
/*   Updated: 2025/04/15 04:10:29 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Character.hpp>

// CONSTRUCTEURS :
//================
Character::Character() : _name("undefined")
{std::cout << "Character default constructor called" << std::endl;}

Character::Character(std::string const & type) : _name(type)
{std::cout << "Character default constructor called for " << this->getName() << std::endl;}

Character::Character(const Character &other) : _name(other.getName())
{
	for (int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
			this->_inventory[i] = new AMateria(other._inventory[i]);
	}
	std::cout << "Character copy constructor called" << std::endl;
}

Character	&Character::operator=(const Character &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
			this->_inventory[i] = new AMateria(other._inventory[i]);
	}
	std::cout << "Character assignation operator called" << std::endl;
	this->setName(other.getName());
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Character destructor called" << std::endl;
}

// SETTER/GETTER :
//================
std::string	const &Character::getName() const {return(this->_name);}
void		Character::setName(std::string name) {this->_name = name;}

// METHODES :
//===========

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return ;
		}
	}
	std::cout << "full inventory" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx] = NULL;
	else
		std::cout << "use() error" << std::endl;
}

void Character::use(int idx, Character& target) 
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << "use() error" << std::endl;
}
