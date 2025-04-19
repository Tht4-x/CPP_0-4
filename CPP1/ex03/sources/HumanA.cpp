/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 22:59:08 by dancel            #+#    #+#             */
/*   Updated: 2025/04/03 00:49:08 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

			HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {}
			HumanA::~HumanA() {}
std::string	HumanA::getName() const {return(this->_name);}
void		HumanA::setName(std::string name) {this->_name = name;}
Weapon		HumanA::getWeapon() const {return(this->_weapon);}
void		HumanA::setWeapon(Weapon weapon) {this->_weapon = weapon;}

void		HumanA::attack() const
{
	std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;
}