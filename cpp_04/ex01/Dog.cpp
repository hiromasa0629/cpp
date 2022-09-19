/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:28:40 by hyap              #+#    #+#             */
/*   Updated: 2022/09/03 19:44:38 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/***********************************
 * Constructors
***********************************/

Dog::Dog(void)
{
	this->set_type("Dog");
	this->set_brain(new Brain());
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
	this->set_brain(rhs.get_brain());
	std::cout << "[Dog] Copy assignment called" << std::endl;
	return (*this);
}

/***********************************
 * Getters
***********************************/

Brain	*Dog::get_brain(void) const
{
	return (this->_brain);
}

/***********************************
 * Setters
***********************************/

void	Dog::set_brain(Brain *brain)
{
	this->_brain = brain;
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
	delete this->_brain;
	std::cout << "[Dog] Destructing..." << std::endl;
}
