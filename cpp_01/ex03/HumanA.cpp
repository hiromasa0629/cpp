/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:44:03 by hyap              #+#    #+#             */
/*   Updated: 2022/08/19 00:06:50 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*
Take weapon in as an reference and passes it to setWeapon();
*/
HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->_name = name;
	this->setWeapon(weapon);
}

HumanA::HumanA(void) {}

HumanA::~HumanA(void) 
{
	std::cout << "Destructing "
			<< this->_name
			<< "..."
			<< std::endl;
}

void	HumanA::attack(void) const
{
	std::cout << this->_name
			<< " attacks with their "
			<< this->_weapon->getType()
			<< std::endl;
}

/*
Takes in weapon as a reference and assign it to _weapon, so now
_weapon (which is a pointer) is pointing to the reference of weapon;
*/
void	HumanA::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

Weapon	HumanA::getWeapon(void) const
{
	return (*(this->_weapon));
}
