/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:57:39 by dancel            #+#    #+#             */
/*   Updated: 2025/04/10 19:53:18 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//CONSTRUCTEURS :
//===============
ClapTrap::ClapTrap() : _name("unknown"), _hit(10), _energy(10), _attack(0)
{std::cout << "Unknown ClapTrap is constructed" << std::endl;}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attack(0)
{std::cout << name << " the ClapTrap is constructed" << std::endl;}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other.getname()), _hit(other.gethit()), _energy(other.getenergy()), _attack(other.getattack())
{std::cout << other.getname() << " the ClapTrap is duplicate" << std::endl;}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	this->sethit(other.gethit());
	this->setenergy(other.getenergy());
	this->setattack(other.getattack());
	{{std::cout << this->getname() << " the ClapTrap is replaced by " << other.getname() << std::endl;}}
	this->setname(other.getname());
	return (*this);
}

ClapTrap::~ClapTrap()
{std::cout << this->getname() << " the ClapTrap is deconstructed" << std::endl;}

//FONCTIONS MEMBRES :
//===================
std::string	ClapTrap::getname() const {return(this->_name);}
int			ClapTrap::gethit() const {return(this->_hit);}
int			ClapTrap::getenergy() const {return(this->_energy);}
int			ClapTrap::getattack() const {return(this->_attack);}

void		ClapTrap::setname(std::string newname) {this->_name = newname;}
void		ClapTrap::sethit(int newhit) {this->_hit = newhit;}
void		ClapTrap::setenergy(int newenergy) {this->_hit = newenergy;}
void		ClapTrap::setattack(int newattack) {this->_hit = newattack;}

void 	ClapTrap::attack(const std::string& target)
{
	if (this->getenergy() > 0 && this->gethit() > 0)
	{
		this->setenergy(this->getenergy() - 1);
		std::cout << this->getname() << " attacks " << target << " causing " << this->getattack() << " points of damage !" << std::endl;
	}
	else
		std::cout << this->getname() << " can't attacks !" << std::endl;
}

void 	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->gethit() > 0)
	{
		this->sethit(this->gethit() - amount);
		std::cout << this->getname() << " lose " << amount << " HP !" << std::endl;
	}
	else
		std::cout << this->getname() << " is already dead !" << std::endl;
}

void 		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->gethit() > 0 && this->getenergy() > 0)
	{
		this->setenergy(this->getenergy() - 1);
		this->sethit(this->gethit() + amount);
		std::cout << this->getname() << " gain " << amount << " HP !" << std::endl;
	}
	else if (this->gethit() <= 0)
		std::cout << this->getname() << " is already dead !" << std::endl;
	else if (this->getenergy() <= 0)
		std::cout << this->getname() << " is energyless !" << std::endl;	
}
