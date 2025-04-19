/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:57:39 by dancel            #+#    #+#             */
/*   Updated: 2025/04/07 22:32:26 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

//CONSTRUCTEURS :
//===============
Point::Point() {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point &other) : _x(other.getx()), _y(other.gety()) {}

Point	&Point::operator=(const Point &other)
{
	static Point	point(other);
	
	return (point);
}

Point::~Point() {}

//FONCTIONS MEMBRES :
//===================
float	Point::getx() const {return (this->_x.toFloat());}
float	Point::gety() const {return (this->_y.toFloat());}