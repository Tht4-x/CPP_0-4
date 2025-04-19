/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 23:44:51 by dancel            #+#    #+#             */
/*   Updated: 2025/04/03 00:59:49 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

			HumanB::~HumanB() {}
std::string	HumanB::getName() const {return(this->_name);}
void		HumanB::setName(std::string name) {this->_name = name;}
Weapon		HumanB::getWeapon() const {return (*this->_weapon);}
void		HumanB::setWeapon(Weapon &weapon) {this->_weapon = &weapon;}

void		HumanB::attack() const
{
	if (!this->_weapon)
		std::cout << getName() << " is unarmed" << std::endl;
	else
		std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;
}