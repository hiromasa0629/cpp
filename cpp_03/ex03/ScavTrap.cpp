/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 00:03:30 by hyap              #+#    #+#             */
/*   Updated: 2022/08/24 17:37:09 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : _HP(100), _ENERGY(50), _DMG(20)
{
	this->_hp = 100;
	this->_energy = 50;
	this->_dmg = 20;
	std::cout << GREEN << "ScavTrap Constructor called" << WHITE << std::endl;
	this->print_status();
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _HP(100), _ENERGY(50), _DMG(20) 
{
	this->_name = name;
	this->_hp = 100;
	this->_energy = 50;
	this->_dmg = 20;
	std::cout << GREEN << "ScavTrap [" << this->get_name()  << "] name constructor called" << WHITE << std::endl;
	this->print_status();
}

ScavTrap::~ScavTrap(void)
{
	std::cout << RED << "ScavTrap [" << this->get_name() << "] Destructing..." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &a) : _HP(100), _ENERGY(50), _DMG(20)
{
	*this = a;
	std::cout << GREEN << "ScavTrap [" << this->get_name() << "] copy constructor called" << WHITE << std::endl;
	this->print_status();
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
{
	this->_name = rhs.get_name();
	this->_hp = rhs.get_hp();
	this->_energy = rhs.get_energy();
	this->_dmg = rhs.get_dmg();
	std::cout << GREEN << "ScavTrap [" << this->get_name() << "] copy assignment called" << WHITE << std::endl;
	return (*this);
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "[" << this->get_name() << "] Gate keeper mode activated!" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "[" << this->get_name() << "] Scavttacking " << target << "..." << std::endl;
	if (this->get_energy() <= 0)
	{
		std::cout << "[" << this->get_name() << "] has no energy left." << std::endl;
		this->print_status();
	}
	else
	{
		std::cout << "[" << this->_name << "] attacks " << target << ", causing " << this->_dmg << " points of damage!" << std::endl;
		this->_energy--;
		this->print_status();
	}
}
