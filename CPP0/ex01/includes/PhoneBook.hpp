/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:43:02 by dancel            #+#    #+#             */
/*   Updated: 2025/03/27 16:40:17 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string.h>
#include <iostream>
#include <iomanip>

class PhoneBook 
{
private:
    Contact contact[8];

public:
    PhoneBook();
    void addcontact(int index, Contact contact);
    void search();
	void display();
};

#endif