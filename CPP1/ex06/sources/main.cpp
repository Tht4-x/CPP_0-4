/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 21:25:58 by dancel            #+#    #+#             */
/*   Updated: 2025/04/03 18:56:26 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	convert(std::string level)
{
	if (level == "DEBUG")
		return (0);
	if (level == "INFO")
		return (1);
	if (level == "WARNING")
		return (2);
	if (level == "ERROR")
		return (3);
	return (4);
}

int main(int ac, char **av)
{
	Harl		harl;
	std::string level;
	if (ac < 1 || ac > 2)
	{
		std::cout << "Error\nusage: <level>" << std::endl;
		return (1);
	}
	if (ac == 1)
		level = "DEBUG";
	else
		level = av[1];
	switch (convert(level))
	{
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break;
		default:
			std::cout << "I've never seen this filter'" << std::endl;
	}
}
