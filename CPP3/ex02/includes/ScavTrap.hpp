/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:31:27 by dancel            #+#    #+#             */
/*   Updated: 2025/04/10 17:57:05 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <ClapTrap.hpp>

class ScavTrap : public ClapTrap
{
	private:
		bool	_guardmod;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &other);
		ScavTrap	&operator=(const ScavTrap &other);
		~ScavTrap();
		
		bool getguardmod() const;
		void setguardmod(bool guardmod);

		void guardGate();
		void attack(const std::string& target);
};