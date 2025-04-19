/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 12:54:55 by dancel            #+#    #+#             */
/*   Updated: 2025/03/27 17:55:48 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}
Contact::Contact() {}

std::string	Contact::getfirstname() const {return (this->firstname);}
std::string	Contact::getlastname() const {return (this->lastname);}
std::string	Contact::getnickname() const {return (this->nickname);}
std::string	Contact::getphonenumber() const {return (this->phonenumber);}
std::string	Contact::getsecret() const {return (this->secret);}

void	Contact::setfirstname(std::string input) {this->firstname = input;}
void	Contact::setlastname(std::string input) {this->lastname = input;}
void	Contact::setnickname(std::string input) {this->nickname = input;}
void	Contact::setphonenumber(std::string input) {this->phonenumber = input;}
void	Contact::setsecret(std::string input) {this->secret = input;}

void	PhoneBook::addcontact(int index, Contact contact) {this->contact[index] = contact;}

void	add(int index, PhoneBook &PB)
{
	std::string input;
	Contact		contact;
	
	std::cout << "FIRST NAME :" << std::endl;
	std::getline(std::cin, input);
	contact.setfirstname(input);
	
	std::cout << "LAST NAME :" << std::endl;
	std::getline(std::cin, input);
	contact.setlastname(input);

	std::cout << "NICK NAME :" << std::endl;
	std::getline(std::cin, input);
	contact.setnickname(input);

	std::cout << "PHONE NUMBER :" << std::endl;
	std::getline(std::cin, input);
	contact.setphonenumber(input);

	std::cout << "DARKEST SECRET :" << std::endl;
	std::getline(std::cin, input);
	contact.setsecret(input);

	PB.addcontact(index, contact);
}

std::string	checksize(std::string s)
{
	if (s.length() <= 10)
		return (s);
	return (s.substr(0, 9) + ".");
}

void	PhoneBook::search()
{
	std::string input;
	
	std::cout << std::endl << std::setw(10) << "|     index" << "|"
			  << std::setw(10) << "first name" << "|"
			  << std::setw(10) << "last name" << "|"
			  << std::setw(10) << "nick name" << "|" << std::endl;
	for (int i = 0; i <= 7; i++)
	{
		std::cout << "|         " << i + 1 << "|"
				  << std::setw(10) << checksize(this->contact[i].getfirstname()) << "|"
				  << std::setw(10) << checksize(this->contact[i].getlastname()) << "|"
				  << std::setw(10) << checksize(this->contact[i].getnickname()) << "|" << std::endl;
	}
	std::cout << std::endl << "INDEX :" << std::endl;
	std::getline(std::cin, input);
	if (input.length() == 1 && input[0] > '0' && input[0] <= '8' && !input[1] && !this->contact[input[0] - '1'].getfirstname().empty())
	{
		std::cout << this->contact[input[0] - '0' - 1].getfirstname() << std::endl;
		std::cout << this->contact[input[0] - '0' - 1].getlastname() << std::endl;
		std::cout << this->contact[input[0] - '0' - 1].getnickname() << std::endl;
		std::cout << this->contact[input[0] - '0' - 1].getphonenumber() << std::endl;
		std::cout << this->contact[input[0] - '0' - 1].getsecret() << std::endl << std::endl;
	}
	else
		std::cout << "wrong index" << std::endl << std::endl;
}

int	main()
{
	std::string input;
	PhoneBook	PB;
	int			index;

	index = 0;
	while (1)
	{
		std::cout << "========================" << std::endl;
		std::cout << " M Y   P H O N E B O O K" << std::endl;
		std::cout << "========================" << std::endl;
		std::cout << "OPTIONS : ADD, SEARCH, EXIT" << std::endl;
		if (!std::getline(std::cin, input))
			break ;
		else if (input == "ADD")
		{
			add(index, PB);
			index = (index + 1) % 8;
		}
		else if (input == "SEARCH")
			PB.search();
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Unknown command." << std::endl;
	}
	return (0);
}
