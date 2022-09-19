/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:33:45 by hyap              #+#    #+#             */
/*   Updated: 2022/09/01 16:45:32 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/***********************************
 * Constructors
***********************************/

WrongCat::WrongCat(void)
{
	this->set_type("WrongCat");
	std::cout << "[WrongCat] Constructors called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &a)
{
	*this = a;
	std::cout << "[WrongCat] Copy constructors called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	this->set_type(rhs.get_type());
	std::cout << "[WrongCat] Copy assignment called" << std::endl;
	return (*this);
}

/***********************************
 * Functions
***********************************/

void	WrongCat::makeSound(void) const
{
	std::cout << "[WrongCat] Meow..." << std::endl;
}

/***********************************
 * Destructors
***********************************/

WrongCat::~WrongCat(void)
{
	std::cout << "[WrongCat] Destructing..." << std::endl;
}
