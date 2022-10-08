/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 22:13:01 by hyap              #+#    #+#             */
/*   Updated: 2022/09/19 21:20:37 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/***********************************
 * Constructor
***********************************/

Character::Character(void) : _name("No Name")
{
	this->_nullify_inv();
	std::cout << "[Character] Constructor called" << std::endl;
}

Character::Character(const Character &a)
{
	this->_nullify_inv();
	*this = a;
}

Character	&Character::operator=(const Character &rhs)
{
	for (size_t i = 0; i < 4; i++)
		this->_inv[i] = rhs._inv[i]->clone();
	this->set_name(rhs.get_name());
	return (*this);
}

Character::Character(const std::string name) : _name(name)
{
	this->_nullify_inv();
	std::cout << "[Character] Name constructor called" << std::endl;
}

/***********************************
 * Getters
***********************************/

const std::string	&Character::get_name(void) const
{
	return (this->_name);
}

/***********************************
 * Setters
***********************************/

void	Character::set_name(const std::string name)
{
	this->_name = name;
}

/***********************************
 * Functions
***********************************/

void	Character::equip(AMateria *m)
{
	size_t	i = 0;
	if (!m)
	{
		std::cout << RED << "Can't equip NULL materia" << WHITE << std::endl;
		return ;
	}
	while (this->_inv[i])
		i++;
	if (i > 3)
	{
		std:: cout << RED << "Inventory is full!" << WHITE << std::endl;
		return ;
	}
	this->_inv[i] = m;
	std::cout << YELLOW << "Successfully equip " << *m << " at slot " << i << WHITE << std::endl;
	
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << RED << "Invalid slot number !" << WHITE << std::endl;
	else if (!this->_inv[idx])
		std::cout << RED << "Slot " << idx << " is empty" << WHITE << std::endl;
	else
	{
		this->_inv[idx] = NULL;
		std::cout << YELLOW << "Successfully unequiped slot " << idx << WHITE << std::endl;
	}
	return ;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		std::cout << RED << "Invalid slot number !" << WHITE << std::endl;
	else if (!this->_inv[idx])
		std::cout << RED << "Slot " << idx << " is empty" << WHITE << std::endl;
	else
		this->_inv[idx]->use(target);
	return ;
}

void	Character::_nullify_inv(void)
{
	for (size_t i = 0; i < 4; i++)
		this->_inv[i] = NULL;
}

/***********************************
 * Destructor
***********************************/

Character::~Character(void)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (!this->_inv[i])
			continue ;
		for (size_t j = i + 1; j < 4; j++)
		{
			if (!this->_inv[j])
				continue ;
			if (this->_inv[j]->get_type() == this->_inv[i]->get_type())
				this->_inv[j] = NULL;
		}
		std::cout << "Deleteing " << this->_inv[i] << std::endl;
		delete this->_inv[i];
		this->_inv[i] = NULL;
	}
	std::cout << "[Character] Destructing..." << std::endl;
}

/***********************************
 * Overload
***********************************/

std::ostream	&operator<<(std::ostream &o, const ICharacter &rhs)
{
	o << rhs.get_name();
	return (o);
}
