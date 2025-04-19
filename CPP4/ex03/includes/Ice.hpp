/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 23:11:36 by dancel            #+#    #+#             */
/*   Updated: 2025/04/15 22:47:43 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "AMateria.hpp"

class ICharacter;

class Ice: public AMateria
{
	private:
		std::string _type;

	public:
		Ice();
		Ice(const Ice &other);
		Ice	&operator=(const Ice &other);
		~Ice();

		virtual AMateria* clone() const;
		void    use(ICharacter& target);
};
