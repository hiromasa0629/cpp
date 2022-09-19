/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 21:10:54 by hyap              #+#    #+#             */
/*   Updated: 2022/09/04 17:40:11 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/***********************************
 * Constructor
***********************************/

AMateria::AMateria(void)
{
	std::cout << "[AMateria] Constructor called" << std::endl;
}

AMateria::AMateria(const std::string &type) : _type(type)
{
	std::cout << "[AMateria] Type constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &a)
{
	*this = a;
}

AMateria	&AMateria::operator=(const AMateria &rhs)
{
	
	this->_type = rhs.get_type();
	return (*this);
}

/***********************************
 * Getters
***********************************/

const std::string &AMateria::get_type(void) const
{
	return (this->_type);
}

/***********************************
 * Setters
***********************************/

void	AMateria::set_type(const std::string type)
{
	this->_type = type;
}

/***********************************
 * Functions
***********************************/

void	AMateria::use(ICharacter &target)
{
	std::cout << "[NOTHING]: \"* Used nothing against " << target << " *\"" << std::endl;
}

/***********************************
 * Destructor
***********************************/

AMateria::~AMateria(void)
{
	std::cout << "[AMateria] Destructing..." << std::endl;
}

/***********************************
 * Overload
***********************************/

std::ostream	&operator<<(std::ostream &o, const AMateria &rhs)
{
	o << rhs.get_type();
	return (o);
}
