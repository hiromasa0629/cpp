/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:49:40 by hyap              #+#    #+#             */
/*   Updated: 2023/01/30 19:58:37 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hp(10), _energy(10), _dmg(0)
{
	std::cout << GREEN << "ClapTrap Constructor called" << WHITE << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << RED << "ClapTrap [" << this->get_name() << "] Destructing..." << WHITE << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _energy(10), _dmg(0)
{
	std::cout << GREEN << "ClapTrap [" << this->get_name() << "] Name constructor called" << WHITE << std::endl;
	this->print_status();
}

ClapTrap::ClapTrap(const ClapTrap &a) : _name(a.get_name()), _hp(a.get_hp()), _energy(a.get_energy()), _dmg(a.get_dmg())
{
	std::cout << GREEN << "ClapTrap [" << this->get_name() << "] ClapTrap copy constructor called" << WHITE << std::endl;
	this->print_status();
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	this->_name = rhs.get_name();
	this->_hp = rhs.get_hp();
	this->_energy = rhs.get_energy();
	this->_dmg = rhs.get_dmg();
	std::cout << GREEN << "ClapTrap [" << this->get_name() << "] copy assignment called" << WHITE << std::endl;
	return (*this);
}

std::string	ClapTrap::get_name(void) const
{
	return (this->_name);
}

int	ClapTrap::get_hp(void) const
{
	return (this->_hp);
}

int	ClapTrap::get_energy(void) const
{
	return (this->_energy);
}

int	ClapTrap::get_dmg(void) const
{
	return (this->_dmg);
}

void	ClapTrap::set_hp(int hp)
{
	this->_hp = hp;
}

void	ClapTrap::set_energy(int energy)
{
	this->_energy = energy;
}

void	ClapTrap::set_dmg(int dmg)
{
	this->_dmg= dmg;
}

void	ClapTrap::attack(const std::string &target)
{
	std::cout << "[" << this->get_name() << "] attacking " << target << "..." << std::endl;

	if (this->get_energy() <= 0)
	{
		std::cout << "[" << this->get_name() << "] has no energy left." << std::endl;
		this->print_status();
	}
	else
	{
		std::cout << "[" << this->_name << "] attacks " << target << ", causing " << this->_dmg << " points of damage!"<< std::endl;
		this->_energy--;
		this->print_status();
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "[" << this->get_name() << "] Taking damage..." << std::endl;
	if (this->get_hp() <= 0)
	{
		std::cout << "[" << this->get_name() << "] is already dead!" << std::endl;
		this->print_status();
	}
	else
	{
		this->_hp -= amount;
		std::cout << "[" << this->_name << "] took " << amount << " points of damage!" << std::endl;
		if (this->_hp < 0)
		{
			this->set_hp(0);
			std::cout << RED << "[" << this->get_name() << "] is dead" << WHITE << std::endl;
		}
		this->print_status();
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "[" << this->get_name() << "] Reparing..." << std::endl;

	if (this->get_energy() <= 0)
	{
		std::cout << "[" << this->get_name() << "] has no energy!" << std::endl;
		this->print_status();
	}
	else
	{
		std::cout << "[" << this->_name << "] has repaired " << amount << "pts of hit points!" << std::endl;
		this->_energy--;
		this->_hp += amount;
		this->print_status();
	}
}

void	ClapTrap::print_status(void) const
{
	std::cout << BLUE << "[" << this->get_name() << "] HP: " << this->get_hp() << ", ENERGY: " << this->get_energy() << WHITE << std::endl;
}
