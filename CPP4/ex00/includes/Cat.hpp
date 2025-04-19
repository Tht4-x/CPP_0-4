/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 23:11:36 by dancel            #+#    #+#             */
/*   Updated: 2025/04/15 01:19:58 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat: public Animal
{
	private:
		std::string _type;

	public:
		Cat();
		Cat(const Cat &other);
		Cat	&operator=(const Cat &other);
		~Cat();

		void makeSound() const;
};
