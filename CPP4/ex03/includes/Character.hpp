/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 21:09:48 by dancel            #+#    #+#             */
/*   Updated: 2025/04/15 22:50:44 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <ICharacter.hpp>

class AMateria;

class Character : public ICharacter
{
	protected:
		std::string _name;
		AMateria* _inventory[4];
		
	public:
		Character();
		Character(std::string const & name);
		Character(const Character &other);
		Character	&operator=(const Character &other);
		virtual ~Character();

		virtual std::string const & getName() const;
		virtual void setName(std::string name);

		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};