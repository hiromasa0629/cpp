/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:16:36 by hyap              #+#    #+#             */
/*   Updated: 2022/09/01 16:45:26 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/***********************************
 * Constructors
***********************************/

WrongAnimal::WrongAnimal(void)
{
	std::cout << "[WrongAnimal] Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
	*this = a;
	std::cout << "[WrongAnimal] Copy constructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->_type = rhs.get_type();
	std::cout << "[WrongAnimal] Copy assignment called" << std::endl;
	return (*this);
}

/***********************************
 * Getters
***********************************/

std::string	WrongAnimal::get_type(void) const
{
	return (this->_type);
}

/***********************************
 * Setters
***********************************/

void	WrongAnimal::set_type(std::string type)
{
	this->_type = type;
}

/***********************************
 * Functions
***********************************/

void	WrongAnimal::makeSound(void) const
{
	std::cout << "[WrongAnimal] difjsdllsn..." << std::endl;
}

/***********************************
 * Destructors
***********************************/

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "[WrongAnimal] Destructing..." << std::endl;
}
