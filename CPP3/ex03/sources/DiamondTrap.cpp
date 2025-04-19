/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:48:26 by dancel            #+#    #+#             */
/*   Updated: 2025/04/15 19:23:51 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

//CONSTRUCTEURS :
//===============
DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	this->_name = "unknown";
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hit = FragTrap::_hit;
	this->_energy = 50;
	this->_attack = FragTrap::_attack;
	std::cout << _name <<  " DiamondTrap is constructed" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(), FragTrap()
{
	this->_name = name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hit = FragTrap::_hit;
	this->_energy = 50;
	this->_attack = FragTrap::_attack;
	std::cout << name << " the DiamondTrap is constructed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other)
{
	std::cout << other.getname() << " the DiamondTrap is duplicate" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other)
{
	this->_hit = other._hit;
	this->_energy = other._energy;
	this->_attack = other._attack;
	std::cout << this->getname() << " the DiamondTrap is replaced by " << other.getname() << std::endl;
	this->_name = other._name;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{std::cout << this->getname() << " the DiamondTrap is deconstructed" << std::endl;}

//FONCTIONS MEMBRES :
//===================

void DiamondTrap::whoAmI()
{
	std::cout << _name << " ClapTrap's name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}


