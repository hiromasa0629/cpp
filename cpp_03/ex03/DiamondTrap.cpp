/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:12:20 by hyap              #+#    #+#             */
/*   Updated: 2023/01/30 20:02:25 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->_hp = FragTrap::_HP;
	this->_energy = ScavTrap::_ENERGY;
	this->_dmg = FragTrap::_DMG;
	std::cout << GREEN << "DiamondTrap Constructor called" << WHITE << std::endl;
	this->print_status();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	this->_name = name;
	this->_hp = FragTrap::_HP;
	this->_energy = ScavTrap::_ENERGY;
	this->_dmg = FragTrap::_DMG;
	std::cout << GREEN << "DiamondTrap [" << this->get_name()  << "] name constructor called" << WHITE << std::endl;
	this->print_status();
}

DiamondTrap::DiamondTrap(const DiamondTrap &a)
{
	*this = a;
	std::cout << GREEN << "DiamondTrap [" << this->get_name() << "] copy constructor called" << WHITE << std::endl;
	this->print_status();
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &rhs)
{
	this->ClapTrap::_name = rhs.ClapTrap::get_name();
	this->_name = rhs.get_name();
	this->_hp = rhs.get_hp();
	this->_energy = rhs.get_energy();
	this->_dmg = rhs.get_dmg();
	std::cout << GREEN << "ScavTrap [" << this->get_name() << "] copy assignment called" << WHITE << std::endl;
	this->print_status();
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << RED << "DiamondTrap [" << this->get_name() << "] Destructing..." << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "I am [" << this->_name << "], ClapTrap's name: " << ClapTrap::_name << std::endl;
}
