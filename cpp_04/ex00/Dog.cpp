/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:28:40 by hyap              #+#    #+#             */
/*   Updated: 2022/09/01 15:55:14 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/***********************************
 * Constructors
***********************************/

Dog::Dog(void)
{
	this->set_type("Dog");
	std::cout << "[Dog] Constructor called" << std::endl;
}

Dog::Dog(const Dog &a)
{
	*this = a;
	std::cout << "[Dog] Copy constructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	this->set_type(rhs.get_type());
	std::cout << "[Dog] Copy assignment called" << std::endl;
	return (*this);
}

/***********************************
 * Functions
***********************************/

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof Woof..." << std::endl;
}

/***********************************
 * Destructor
***********************************/

Dog::~Dog(void)
{
	std::cout << "[Dog] Destructing..." << std::endl;
}
