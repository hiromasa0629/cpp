/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 01:36:53 by hyap              #+#    #+#             */
/*   Updated: 2022/08/18 02:24:32 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) {}

Zombie::~Zombie(void)
{
	std::cout << "Destructing " << this->_name << "_" << this->_index << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "I am " << this->_name << "_" << this->_index << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}

void	Zombie::set_index(int index)
{
	this->_index = index;
}

int	Zombie::get_index(void) const
{
	return (this->_index);
}
