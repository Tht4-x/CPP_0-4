/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 21:25:37 by dancel            #+#    #+#             */
/*   Updated: 2025/04/02 18:16:05 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string _name)
{
	Zombie*	zombie;
	
	zombie = newZombie(_name);
	zombie->announce();
	delete zombie;
}
