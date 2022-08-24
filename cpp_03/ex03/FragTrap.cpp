/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:37:37 by hyap              #+#    #+#             */
/*   Updated: 2022/08/24 18:12:10 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : _HP(100), _ENERGY(100), _DMG(30)
{
	this->_hp = 100;
	this->_energy = 100;
	this->_dmg = 30;
	std::cout << GREEN << "FragTrap Constructor called" << WHITE << std::endl;
	this->print_status();
}

FragTrap::FragTrap(std::string name) : ClapTrap(name), _HP(100), _ENERGY(100), _DMG(30)
{
	this->_name = name;
	this->_hp = 100;
	this->_energy = 100;
	this->_dmg = 30;
	std::cout << GREEN << "FragTrap [" << this->get_name()  << "] name constructor called" << WHITE << std::endl;
	this->print_status();
}

FragTrap::~FragTrap(void)
{
	std::cout << RED << "FragTrap [" << this->get_name()  << "] Destructing..." << WHITE << std::endl;
}

FragTrap::FragTrap(const FragTrap &a) : _HP(100), _ENERGY(100), _DMG(30)
{
	*this = a;
	std::cout << GREEN << "FragTrap [" << this->get_name() << "] copy constructor called" << WHITE << std::endl;
	this->print_status();
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
{
	this->_name = rhs.get_name();
	this->_hp = rhs.get_hp();
	this->_energy = rhs.get_energy();
	this->_dmg = rhs.get_dmg();
	std::cout << GREEN << "FragTrap [" << this->get_name() << "] copy assignment called" << WHITE << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void) const
{
	std::cout << "[" << this->get_name() << "]High give guys ?" << std::endl;
}
