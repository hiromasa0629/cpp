/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:42:34 by hyap              #+#    #+#             */
/*   Updated: 2022/08/18 23:57:32 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::HumanB(std::string name, Weapon &weapon)
{
	this->_name = name;
	this->setWeapon(weapon);
}

HumanB::HumanB(void) {}

HumanB::~HumanB(void) 
{
	std::cout << "Destructing "
		<< this->_name
		<< "..."
		<< std::endl;
}

void	HumanB::attack(void) const
{
	std::cout << this->_name
			<< " attacks with their "
			<< this->_weapon->getType()
			<< std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

Weapon	HumanB::getWeapon(void) const
{
	return (*(this->_weapon));
}
