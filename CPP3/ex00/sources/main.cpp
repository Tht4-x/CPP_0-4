/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 21:25:58 by dancel            #+#    #+#             */
/*   Updated: 2025/04/10 23:16:09 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	a.takeDamage(2);
	clap.takeDamage(20);
	a.attack("target");
	clap.attack("target2");
	a.beRepaired(2);
	clap.beRepaired(2);
	copy.takeDamage(10);
	a = clap;
	clap.takeDamage(1);
}
