/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 21:25:58 by dancel            #+#    #+#             */
/*   Updated: 2025/04/03 16:31:36 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string	replace(std::string content, char *char1, char *char2)
{
	std::string	result;
	std::string s1 = char1;
	std::string s2 = char2;
	size_t		i = 0;

	while (i < content.size())
	{
		if (content.substr(i, s1.size()) == s1)
		{
			result += s2;
			i += s1.size();
		}
		else
		{
			result += content[i];
			i++;
		}
	}
	return (result);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error :\nusage : <filename> <string to find> <string to replace>" << std::endl;
		return (1);
	}
	
	std::ifstream filein(av[1]);
	if (!filein)
	{
		std::cout << "Error :\nunreadable file" << std::endl;
		return (1);
	}

	std::string content((std::istreambuf_iterator<char>(filein)), std::istreambuf_iterator<char>());
	filein.close();
	
//	std::cout << content << std::endl;
//	std::cout << replace(content, av[2], av[3]) << std::endl;

	std::ofstream fileout(av[1]);
	if (!fileout)
	{
		std::cout << "Error :\ncannot write to file" << std::endl;
		return (1);
	}
	fileout << replace(content, av[2], av[3]);
	fileout.close();
	return (0);
}
