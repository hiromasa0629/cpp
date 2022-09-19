/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:20:34 by hyap              #+#    #+#             */
/*   Updated: 2022/09/01 16:17:42 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

/***********************************
 * Constructors
***********************************/

Animal::Animal(void)
{
	std::cout << "[Animal] Constructed called" << std::endl;
}

Animal::Animal(const Animal &a)
{
	*this = a;
	std::cout << "[Animal] Copy constructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &rhs)
{
	this->set_type(rhs.get_type());
	std::cout << "[Animal] Copy assignment called" << std::endl;
	return (*this);
}

/***********************************
 * Getters
***********************************/

std::string	Animal::get_type(void) const
{
	return (this->_type);
}

/***********************************
 * Setters
***********************************/

void	Animal::set_type(std::string type)
{
	this->_type = type;
}

/***********************************
 * Functions
***********************************/

void	Animal::makeSound(void) const
{
	std::cout << "[Animal] kdhfkshfklsdkg..." << std::endl;
}

/***********************************
 * Destructor
***********************************/

Animal::~Animal(void)
{
	std::cout << "[Animal] Destructing..." << std::endl;
}

