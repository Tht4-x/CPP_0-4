/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 23:11:36 by dancel            #+#    #+#             */
/*   Updated: 2025/04/15 02:08:42 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		std::string _type;
		Brain*		_brain;

	public:
		Dog();
		Dog(const Dog &other);
		Dog	&operator=(const Dog &other);
		~Dog();

		void makeSound() const;
};
