/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:00:56 by dancel            #+#    #+#             */
/*   Updated: 2025/04/07 22:50:16 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//FONCTIONS MEMBRES :
//===================
void	Fixed::setRawBits(int const raw) {_value = raw;}

int 	Fixed::getRawBits() const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return(this->_value);
}

float Fixed::toFloat() const {return ((float)_value / (1 << _nbit));}

int Fixed::toInt() const {return (_value >> _nbit);}

Fixed	&Fixed::min(Fixed &fx1, Fixed &fx2)
{
	if (fx1.getRawBits() > fx2.getRawBits())
		return (fx2);
	return (fx1);
}

const Fixed	&Fixed::min(const Fixed &fx1, const Fixed &fx2)
{
	if (fx1.getRawBits() > fx2.getRawBits())
		return (fx2);
	return (fx1);
}

Fixed	&Fixed::max(Fixed &fx1, Fixed &fx2)
{
	if (fx1.getRawBits() < fx2.getRawBits())
		return (fx2);
	return (fx1);
}

const Fixed	&Fixed::max(const Fixed &fx1, const Fixed &fx2)
{
	if (fx1.getRawBits() < fx2.getRawBits())
		return (fx2);
	return (fx1);
}

//CONSTRUCTEURS :
//===============
Fixed::Fixed() {_value = 0;}
Fixed::Fixed(const int n) {_value = n << _nbit;}
Fixed::Fixed(const float f) {_value = roundf(f * (1 << _nbit));}
Fixed::Fixed(const Fixed &other) {this->_value = other._value;}
Fixed::~Fixed() {}

//SURCHARGEURS :
//===============
Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->_value = other._value;
	return (*this);
}

bool Fixed::operator>(const Fixed &other) const {return (this->getRawBits() > other.getRawBits());}
bool Fixed::operator<(const Fixed &other) const {return (this->getRawBits() < other.getRawBits());}
bool Fixed::operator>=(const Fixed &other) const {return (this->getRawBits() >= other.getRawBits());}
bool Fixed::operator<=(const Fixed &other) const {return (this->getRawBits() <= other.getRawBits());}
bool Fixed::operator==(const Fixed &other) const {return (this->getRawBits() == other.getRawBits());}
bool Fixed::operator!=(const Fixed &other) const {return (this->getRawBits() != other.getRawBits());}

float Fixed::operator+(const Fixed &other) const {return (this->toFloat() + other.toFloat());}
float Fixed::operator-(const Fixed &other) const {return (this->toFloat() - other.toFloat());}
float Fixed::operator*(const Fixed &other) const {return (this->toFloat() * other.toFloat());}
float Fixed::operator/(const Fixed &other) const {return (this->toFloat() / other.toFloat());}

Fixed Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	temp = *this;
	
	this->_value++;
	return (temp);
}

Fixed Fixed::operator--()
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	temp = *this;

	this->_value--;
	return (temp);
}

std::ostream	&operator<<(std::ostream &s, Fixed const &value) {return (s << value.toFloat());}
