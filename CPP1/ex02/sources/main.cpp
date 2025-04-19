/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 21:25:58 by dancel            #+#    #+#             */
/*   Updated: 2025/04/02 19:41:25 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iomanip>
#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "memory address of the string variable :" << &string << std::endl;
	std::cout << "memory address held by stringPTR :" << &stringPTR << std::endl;
	std::cout << "memory address held by stringREF :" << &stringREF << std::endl;
	std::cout << "value of the string variable :" << *stringPTR << std::endl;
	std::cout << "value pointed to by stringPTR :" << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF :" << stringREF << std::endl;
}
