/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 21:43:41 by hyap              #+#    #+#             */
/*   Updated: 2022/09/04 16:43:14 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/***********************************
 * Constructor
***********************************/

Ice::Ice(void)
{
	this->set_type("ice");
	std::cout << "[Ice] Constructor called" << std::endl;
}

Ice::Ice(const Ice &a)
{
	*this = a;
}

Ice	&Ice::operator=(const Ice &rhs)
{
	this->set_type(rhs.get_type());
	return (*this);
}

/***********************************
 * Functions
***********************************/

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << YELLOW << "* [Ice]: \"shoots an ice bolt at " <<  target << " \" *" << WHITE << std::endl;
}

/***********************************
 * Destructor
***********************************/

Ice::~Ice(void)
{
	std::cout << "[Ice] Destructing..." << std::endl;
}

/***********************************
 * Overload
***********************************/

std::ostream	&operator<<(std::ostream &o, const Ice &rhs)
{
	o << rhs.get_type();
	return (o);
}
