/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 21:26:09 by dancel            #+#    #+#             */
/*   Updated: 2025/04/02 18:16:18 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string	_name;
	
public:
	Zombie();
	~Zombie();

	void		setname(std::string name);
	std::string	getname() const;
	void 		announce() const;
};

Zombie *newZombie(std::string name);
void 	randomChump(std::string name);
