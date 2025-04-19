/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:18:39 by dancel            #+#    #+#             */
/*   Updated: 2025/04/02 18:56:51 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		std::cout << "Horde size must be positiv !" << std::endl;
		return (NULL);
	}
	
	Zombie	*zombies = new Zombie[N];
	
	for (int i = 0; i < N; i++)
		zombies[i].setname(name);
	return (zombies);
}