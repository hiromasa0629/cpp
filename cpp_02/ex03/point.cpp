/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:42:07 by hyap              #+#    #+#             */
/*   Updated: 2022/08/22 15:21:56 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
{
	std::cout << "Point constructor called." << std::endl;
}

Point::Point(const Point &a) : _x(a.getX()), _y(a.getY())
{
	// std::cout << "[Point] copy constructor called" << std::endl;
	(*this) = a;
}

Point::~Point(void)
{
	// std::cout << "Deconstructing Point..." << std::endl;
}

Point::Point(const float n1, const float n2) : _x(n1), _y(n2)
{
	// std::cout << "[Point] Two floats constructor called" << std::endl;
	// std::cout << "_x: " << _x << std::endl;
	// std::cout << "_y: " << _y << std::endl;
}

Point	&Point::operator=(const Point &rhs)
{
	// std::cout << "[Point] copy assignment called" << std::endl;
	
	(void)rhs;
	// *this = rhs;
	return (*this);
}

Point	Point::operator-(const Point &rhs) const
{
	return (Point(this->getX() - rhs.getX(), this->getY() - rhs.getY()));
}

Point	Point::substract(const Point a, const Point b)
{
	return (a - b);
}

float	Point::dotProduct(const Point a, const Point b)
{
	return ((a.getX() * b.getY()) + (a.getY() * b.getX()));
}

float Point::getX(void) const
{
	// std::cout << "_x: " << this->_x.toFloat() << std::endl;
	return (this->_x.toFloat());
}

float Point::getY(void) const
{
	return (this->_y.toFloat());
}

std::ostream	&operator<<(std::ostream &o, const Point &rhs)
{
	o << "[" << rhs.getX() << "," << rhs.getY() << "]";
	return (o);
}
