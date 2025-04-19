/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:48:26 by dancel            #+#    #+#             */
/*   Updated: 2025/04/10 22:43:44 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

//CONSTRUCTEURS :
//===============
ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "Unknown ScavTrap is constructed" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << name << " the ScavTrap is constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	this->setguardmod(other.getguardmod());
	std::cout << other.getname() << " the ScavTrap is duplicate" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	this->_hit = other._hit;
	this->_energy = other._energy;
	this->_attack = other._attack;
	this->_guardmod = other._guardmod;
	std::cout << this->getname() << " the ScavTrap is replaced by " << other.getname() << std::endl;
	this->_name = other._name;
	return (*this);
}

ScavTrap::~ScavTrap()
{std::cout << this->getname() << " the ScavTrap is deconstructed" << std::endl;}

//FONCTIONS MEMBRES :
//===================
bool		ScavTrap::getguardmod() const {return(this->_guardmod);}
void		ScavTrap::setguardmod(bool guardmod) {this->_guardmod = guardmod;}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getenergy() > 0 && this->gethit() > 0)
	{
		this->setenergy(this->getenergy() - 1);
		std::cout << this->getname() << " the ScavTrap attacks " << target << " causing " << this->getattack() << " points of damage !" << std::endl;
	}
	else
		std::cout << this->getname() << " the ScavTrap can't attacks !" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->gethit() > 0 && this->getguardmod() == 0)
	{
		std::cout << this->getname() << " the ScavTrap is now in Gate keeper mode" << std::endl;
		this->setguardmod(1);
	}
	else if (this->gethit() > 0 && this->getguardmod() == 1)
		std::cout << this->getname() << " the ScavTrap is already in Gate keeper mode" << std::endl;
	else
		std::cout << this->getname() << " is dead" << std::endl;
}
