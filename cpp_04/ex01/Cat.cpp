/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:48:42 by hyap              #+#    #+#             */
/*   Updated: 2022/09/03 19:48:31 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

/***********************************
 * Constructor
***********************************/

Cat::Cat(void)
{
	this->set_type("Cat");
	this->set_brain(new Brain());
	std::cout << "[Cat] Constructors called" << std::endl;
}

Cat::Cat(const Cat &a)
{
	*this = a;
	std::cout << "[Cat] Copy constructors called" << std::endl;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	this->set_type(rhs.get_type());
	this->set_brain(rhs.get_brain());
	std::cout << "[Cat] Copy assignment called" << std::endl;
	return (*this);
}

/***********************************
 * Getters
***********************************/

Brain	*Cat::get_brain(void) const
{
	return (this->_brain);
}

/***********************************
 * Setters
***********************************/

void	Cat::set_brain(Brain *brain)
{
	this->_brain = brain;
}

/***********************************
 * Functions
***********************************/

void	Cat::makeSound(void) const
{
	std::cout << "Meow..." << std::endl;
}

/***********************************
 * Destructor
***********************************/

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "[Cat] Destructing..." << std::endl;
}
