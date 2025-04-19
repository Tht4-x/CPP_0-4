/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 22:58:26 by dancel            #+#    #+#             */
/*   Updated: 2025/04/03 00:59:33 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		*_weapon;
	
public:
	HumanB(std::string name);
	~HumanB();

	std::string	getName() const;
	void		setName(std::string Name);
	Weapon		getWeapon() const;
	void		setWeapon(Weapon &weapon);
	void		attack() const;
};