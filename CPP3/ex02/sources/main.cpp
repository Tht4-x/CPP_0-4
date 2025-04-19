/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 21:25:58 by dancel            #+#    #+#             */
/*   Updated: 2025/04/10 23:13:19 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << std::endl;
	FragTrap	a;
	FragTrap	frag("Frag");
	FragTrap	copy(frag);
	
	a.highFivesGuys();
	a.takeDamage(2);
	frag.takeDamage(200);
	a.attack("target");
	frag.attack("target2");
	a.beRepaired(2);
	frag.beRepaired(2);
	copy.takeDamage(10);
	a = frag;
	frag.takeDamage(1);
}
