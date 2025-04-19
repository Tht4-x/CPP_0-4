/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:00:56 by dancel            #+#    #+#             */
/*   Updated: 2025/04/03 18:02:41 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void Harl::complain(std::string level)
{
	void		(Harl::*ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	method[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level == method[i])
		{
			(this->*ptr[i])();
			return ;
		}
	}
	std::cout << "Error:\nwrong instruction" << std::endl;
}

void Harl::debug()
{
	std::cout << "I'm debuging !" << std::endl;
}

void Harl::info()
{
	std::cout << "I'm informing !" << std::endl;
}

void Harl::warning()
{
	std::cout << "I'm warning you for the last time !" << std::endl;
}

void Harl::error()
{
	std::cout << "ERROR !" << std::endl;
}
