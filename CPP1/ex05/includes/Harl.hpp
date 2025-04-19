/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:39:55 by dancel            #+#    #+#             */
/*   Updated: 2025/04/03 17:03:23 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Harl
{
	private:
		void debug();
		void info();
		void warning();
		void error();
		
	public:
		Harl();
		~Harl();
		void complain(std::string level);
};
