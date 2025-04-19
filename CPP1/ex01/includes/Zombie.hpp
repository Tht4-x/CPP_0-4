/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 21:26:09 by dancel            #+#    #+#             */
/*   Updated: 2025/04/02 18:52:36 by dancel           ###   ########.fr       */
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
};

Zombie* zombieHorde(int N, std::string name);
