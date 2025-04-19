/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 00:37:22 by dancel            #+#    #+#             */
/*   Updated: 2025/04/09 19:45:16 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		int			_hit;
		int			_energy;
		int			_attack;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		ClapTrap	&operator=(const ClapTrap &other);
		~ClapTrap();

		std::string	getname() const;
		int	gethit() const;
		int	getenergy() const;
		int	getattack() const;

		void	setname(std::string newname);
		void	sethit(int newhit);
		void	setenergy(int newenergy);
		void	setattack(int newattack);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
