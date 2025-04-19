/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:00:56 by dancel            #+#    #+#             */
/*   Updated: 2025/04/07 16:49:50 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//FONCTIONS MEMBRES :
//===================
void	Fixed::setRawBits(int const raw) {_value = raw;}

int 	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_value);
}

float Fixed::toFloat() const
{
	return ((float)_value / (1 << _nbit));
}

int Fixed::toInt() const
{
	return (_value >> _nbit);
}

//CONSTRUCTEURS :
//===============
Fixed::Fixed()
{
	_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	_value = n << _nbit;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	_value = roundf(f * (1 << _nbit));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	this->_value = other._value;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {std::cout << "Destructor called" << std::endl;}

//SURCHARGEURS :
//===============
Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->_value = other._value;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

std::ostream	&operator<<(std::ostream &s, Fixed const &value)
{
	return (s << value.toFloat());
}
