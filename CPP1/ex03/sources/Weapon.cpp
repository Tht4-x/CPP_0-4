/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 23:02:19 by dancel            #+#    #+#             */
/*   Updated: 2025/04/03 00:34:31 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

			Weapon::Weapon(std::string type) : _type(type) {}
			Weapon::~Weapon() {}
std::string	Weapon::getType() const {return(this->_type);}
void		Weapon::setType(std::string type) {this->_type = type;}