/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancel <dancel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 21:25:58 by dancel            #+#    #+#             */
/*   Updated: 2025/04/07 22:49:44 by dancel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

float	getarea(Point const &a, Point const &b, Point const &c)
{
	float area;

	area = 0.5 * (a.getx() * (b.gety() - c.gety()) + b.getx() * (c.gety() - a.gety()) + c.getx() * (a.gety() - b.gety()));
	if (area < 0)
		area = -area;
	return (area);
}

bool	bsp(Point const a, Point const b, Point const c, Point const p)
{
	float	a1 = getarea(a, b, p);
	float	a2 = getarea(a, p, c);
	float	a3 = getarea(p, b, c);
	if (getarea(a, b, c) == a1 + a2 + a3 && a1 && a2 && a3)
		return (true);
	return (false);
}

int main()
{
{	//TEST 1, is inside
	Point a(0, 0);
	Point b(1, 0);
	Point c(0, 1);
	Point point(0.145, 0.2865);
	if (bsp(a, b, c, point))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is outside the triangle" << std::endl;}
		
{	//TEST 2, is on the side
	Point a(0, 0);
	Point b(1, 0);
	Point c(0, 1);
	Point point(0, 0.83456);
	if (bsp(a, b, c, point))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is outside the triangle" << std::endl;}
		
{	//TEST 3, is outside
	Point a(0, 0);
	Point b(1, 0);
	Point c(0, 1);
	Point point(456.5465, 978.546);
	if (bsp(a, b, c, point))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is outside the triangle" << std::endl;	}
}
