/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 02:40:27 by dancel            #+#    #+#             */
/*   Updated: 2025/04/15 22:46:54 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
		
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria &other);
		AMateria	&operator=(const AMateria &other);
		virtual ~AMateria();

		std::string const & getType() const;
		void	setType(std::string type);

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
