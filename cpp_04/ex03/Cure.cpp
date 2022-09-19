/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 21:55:25 by hyap              #+#    #+#             */
/*   Updated: 2022/09/04 16:57:35 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/***********************************
 * Constructor
***********************************/

Cure::Cure(void)
{
	this->set_type("cure");
	std::cout << "[Cure] Constructor called" << std::endl;
}

Cure::Cure(const Cure &a)
{
	*this = a;
}

Cure	&Cure::operator=(const Cure &rhs)
{
	this->set_type(rhs.get_type());
	return (*this);
}

/***********************************
 * Functions
***********************************/

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << YELLOW << "* [Cure]: \"heals " << target << "'s wounds \" *" << WHITE << std::endl;
}

/***********************************
 * Destructor
***********************************/

Cure::~Cure(void)
{
	std::cout << "[Cure] Destructing..." << std::endl;
}

/***********************************
 * Overload
***********************************/

std::ostream	&operator<<(std::ostream &o, const Cure &rhs)
{
	o << rhs.get_type();
	return (o);
}
