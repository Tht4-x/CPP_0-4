/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 21:25:40 by dancel            #+#    #+#             */
/*   Updated: 2025/04/02 18:16:11 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie()
{
	std::cout << getname() << " died painfully" << std::endl;
}

void		Zombie::setname(std::string name) {this->_name = name;}
std::string	Zombie::getname() const {return (this->_name);}

void	Zombie::announce() const
{
	std::cout << getname() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
