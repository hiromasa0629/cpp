/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 02:49:01 by hyap              #+#    #+#             */
/*   Updated: 2022/08/19 22:50:50 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fp(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &a) : _fp(a._fp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed& Fixed::operator=(const Fixed &a)
{
	std::cout << "Copy assignment constructor called" << std::endl;
	this->_fp = a.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) 
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fp);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fp = raw;
}
