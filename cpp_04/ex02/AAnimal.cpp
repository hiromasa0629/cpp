/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:20:34 by hyap              #+#    #+#             */
/*   Updated: 2022/09/01 16:17:42 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"

/***********************************
 * Constructors
***********************************/

AAnimal::AAnimal(void)
{
	std::cout << "[AAnimal] Constructed called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &a)
{
	*this = a;
	std::cout << "[AAnimal] Copy constructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &rhs)
{
	this->set_type(rhs.get_type());
	std::cout << "[AAnimal] Copy assignment called" << std::endl;
	return (*this);
}

/***********************************
 * Getters
***********************************/

std::string	AAnimal::get_type(void) const
{
	return (this->_type);
}

/***********************************
 * Setters
***********************************/

void	AAnimal::set_type(std::string type)
{
	this->_type = type;
}

/***********************************
 * Functions
***********************************/

void	AAnimal::makeSound(void) const
{
	std::cout << "[AAnimal] kdhfkshfklsdkg..." << std::endl;
}

/***********************************
 * Destructor
***********************************/

AAnimal::~AAnimal(void)
{
	std::cout << "[AAnimal] Destructing..." << std::endl;
}

