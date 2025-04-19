/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 21:25:58 by dancel            #+#    #+#             */
/*   Updated: 2025/04/10 23:14:51 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{	
{	std::cout << std::endl;
	ClapTrap	a;
	ClapTrap	clap("Clap");
	ClapTrap	copy(clap);
	
	a.takeDamage(2);
	clap.takeDamage(20);
	a.attack("target");
	clap.attack("target2");
	a.beRepaired(2);
	clap.beRepaired(2);
	copy.takeDamage(10);
	a = clap;
	clap.takeDamage(1);}
	
{	std::cout << std::endl;
	ScavTrap	a;
	ScavTrap	scav("Scav");
	ScavTrap	copy(scav);
	
	a.guardGate();
	a.guardGate();
	a.takeDamage(2);
	scav.takeDamage(200);
	a.attack("target");
	scav.attack("target2");
	a.beRepaired(2);
	scav.beRepaired(2);
	copy.takeDamage(10);
	a = scav;
	scav.takeDamage(1);
}
}
