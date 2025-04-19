/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 22:58:16 by dancel            #+#    #+#             */
/*   Updated: 2025/04/03 00:48:42 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon		&_weapon;
	
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	std::string	getName() const;
	void		setName(std::string Name);
	Weapon		getWeapon() const;
	void		setWeapon(Weapon weapon);
	void		attack() const;
};
