/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 21:25:58 by dancel            #+#    #+#             */
/*   Updated: 2025/04/15 19:23:17 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void	display(ClapTrap claptrap)
{
	std::cout << "name : " << claptrap.getname() << std::endl;
	std::cout << "hit : " << claptrap.gethit() << std::endl;
	std::cout << "energy : " << claptrap.getenergy() << std::endl;
	std::cout << "attack : " << claptrap.getattack() << std::endl;
}

int main()
{
{
	DiamondTrap	a;
	display(a);
	DiamondTrap	clap("Clap");
	display(clap);
	DiamondTrap	copy(clap);
	display(copy);
}
{
	std::cout << std::endl;
	DiamondTrap	a;
	DiamondTrap	Diamond("Diam's");
	DiamondTrap	copy(Diamond);
	
	
	Diamond.whoAmI();
	Diamond.guardGate();
	a.highFivesGuys();
	a.takeDamage(2);
	Diamond.takeDamage(200);
	a.attack("target");
	Diamond.attack("target2");
	a.beRepaired(2);
	Diamond.beRepaired(2);
	copy.takeDamage(10);
	a = Diamond;
	Diamond.takeDamage(1);
}
}
