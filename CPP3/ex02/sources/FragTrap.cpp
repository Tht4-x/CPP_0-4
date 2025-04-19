/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:48:26 by dancel            #+#    #+#             */
/*   Updated: 2025/04/10 19:57:09 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

//CONSTRUCTEURS :
//===============
FragTrap::FragTrap() : ClapTrap()
{
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "Unknown FragTrap is constructed" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << name << " the FragTrap is constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << other.getname() << " the FragTrap is duplicate" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	this->_hit = other._hit;
	this->_energy = other._energy;
	this->_attack = other._attack;
	std::cout << this->getname() << " the FragTrap is replaced by " << other.getname() << std::endl;
	this->_name = other._name;
	return (*this);
}

FragTrap::~FragTrap()
{std::cout << this->getname() << " the FragTrap is deconstructed" << std::endl;}

//FONCTIONS MEMBRES :
//===================

void FragTrap::highFivesGuys(void)
{
	std::cout << this->getname() << " the FragTrap give you a positive high-fives reques" << std::endl;
}

