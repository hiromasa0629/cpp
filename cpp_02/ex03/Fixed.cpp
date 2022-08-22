/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 02:49:01 by hyap              #+#    #+#             */
/*   Updated: 2022/08/21 03:02:32 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_frac_bits = 8;

Fixed::Fixed(void) : _fp(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	// std::cout << "Int constructor called" << std::endl;
	this->setRawBits(std::roundf(num * (1 << Fixed::_frac_bits)));
}

Fixed::Fixed(const float fnum) : _fp(fnum)
{
	// std::cout << "Float constructor called" << std::endl;
	this->setRawBits(std::roundf(fnum * (1 << Fixed::_frac_bits)));
}

Fixed::Fixed(const Fixed &a) : _fp(a._fp)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment constructor called" << std::endl;
	this->_fp = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) 
{
	// std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (this->_fp);
}

void	Fixed::setRawBits(const int raw)
{
	this->_fp = raw;
}

float	Fixed::toFloat(void) const
{
	float	fnum;

	fnum = (float)this->_fp / (1 << Fixed::_frac_bits);
	return (fnum);
}

int	Fixed::toInt(void) const
{
	int	num;

	num = std::roundf(this->_fp / (1 << Fixed::_frac_bits));
	return (num);
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed&	Fixed::operator++()
{
	Fixed& tmp = (*this);

	tmp._fp = ++this->_fp;
	return (tmp);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = (*this);
	tmp._fp = this->_fp++;
	return (tmp);
}

Fixed&	Fixed::operator--()
{
	Fixed&	tmp = (*this);

	tmp._fp = --this->_fp;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = (*this);

	tmp._fp = this->_fp++;
	return(tmp);
}

std::ostream	&operator<<(std::ostream &o, const Fixed &rhs)
{
	o << rhs.toFloat();
	return (o);
}

Fixed&	Fixed::min(Fixed &one, Fixed &two)
{
	if (one.getRawBits() < two.getRawBits())
		return (one);
	else
		return (two);
}

const Fixed&	Fixed::min(const Fixed &one, const Fixed &two)
{
	if (one.getRawBits() < two.getRawBits())
		return (one);
	else
		return (two);
}

Fixed&	Fixed::max(Fixed &one, Fixed &two)
{
	if (one.getRawBits() > two.getRawBits())
		return (one);
	else
		return (two);
}

const Fixed&	Fixed::max(const Fixed &one, const Fixed &two)
{
	if (one.getRawBits() > two.getRawBits())
		return (one);
	else
		return (two);
}
