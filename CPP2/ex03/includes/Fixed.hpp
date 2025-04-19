/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:39:55 by dancel            #+#    #+#             */
/*   Updated: 2025/04/07 19:46:22 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int 				_value;
		static const int 	_nbit = 8;
		
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed &other);
		~Fixed();

		Fixed &operator=(const Fixed &other);
		
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;

		float operator+(const Fixed &other) const;
		float operator-(const Fixed &other) const;
		float operator*(const Fixed &other) const;
		float operator/(const Fixed &other) const;

		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);
		
		int 	getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;

		static Fixed		&min(Fixed &fx1, Fixed &fx2);
		static const Fixed	&min(const Fixed &fx1, const Fixed &fx2);
		static Fixed		&max(Fixed &fx1, Fixed &fx2);
		static const Fixed	&max(const Fixed &fx1, const Fixed &fx2);
};

std::ostream	&operator<<(std::ostream &s, Fixed const &value);
