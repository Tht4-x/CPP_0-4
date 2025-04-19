/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:58:09 by dancel            #+#    #+#             */
/*   Updated: 2025/03/27 16:25:30 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "PhoneBook.hpp"
#include <string.h>
#include <iostream>

class Contact
{
private:
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string secret;

public:
	Contact();
	void setfirstname(std::string input);
	void setlastname(std::string input);
	void setnickname(std::string input);
	void setphonenumber(std::string input);
	void setsecret(std::string input);
	std::string	getfirstname() const;
	std::string	getlastname() const;
	std::string	getnickname() const;
	std::string	getphonenumber() const;
	std::string	getsecret() const;
};

#endif