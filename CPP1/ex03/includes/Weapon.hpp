/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 21:26:09 by dancel            #+#    #+#             */
/*   Updated: 2025/04/03 00:54:06 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Weapon
{
private:
	std::string	_type;
	
public:
	Weapon(std::string type);
	~Weapon();

	std::string	getType() const;
	void		setType(std::string type);
};

