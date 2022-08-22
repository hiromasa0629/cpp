/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 00:03:30 by hyap              #+#    #+#             */
/*   Updated: 2022/08/23 00:47:46 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_hp = 100;
	this->_energy = 50;
	this->_dmg = 20;
	std::cout << GREEN << "ScavTrap constructor called" << std::endl;
	this->print_status();
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hp = 100;
	this->_energy = 50;
	this->_dmg = 20;
	std::cout << GREEN << "ScavTrap name constructor called" << std::endl;
	this->print_status();
}

ScavTrap::~ScavTrap(void)
{
	std::cout << RED << "ScavTrap [" << this->_name << "] Destructing..." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &a)
{
	this->_name = a.get_name();
	this->_hp = a.get_hp();
	this->_energy = a.get_energy();
	this->_dmg = a.get_dmg();
	std::cout << GREEN << "ClapTrap [" << this->get_name() << "] ClapTrap copy constructor called" << std::endl;
	this->print_status()
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
{
	this->_name = rhs.get_name();
	this->_hp = rhs.get_hp();
	this->_energy = rhs.get_energy();
	this->_dmg = rhs.get_dmg();
	std::cout << GREEN << "ClapTrap [" << this->get_name() << "] ClapTrap copy assignment called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap [" << this->get_name() << "] attacking " << target << "..." << std::endl;
	if (this->get_energy() <= 0)
	{
		std::cout << "ScavTrap [" << this->get_name() << "] has no energy left." << std::endl;
		this->print_status();
	}
	else
	{
		std::cout << "ScavTrap [" << this->_name << "] attacks " << target << ", causing " << this->_dmg << " points of damage!" << std::endl;
		this->_energy--;
		this->print_status();
	}
}

void	ScavTrap::print_status(void) const
{
	std::cout << "ScavTrap [" << this->get_name() << "] HP: " << this->get_hp() << ", ENERGY: " << this->get_energy() << std::endl;
}
