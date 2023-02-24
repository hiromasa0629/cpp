/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 01:36:53 by hyap              #+#    #+#             */
/*   Updated: 2023/01/16 20:21:46 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "name constructor" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructing " << this->_name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(const Zombie &src) { this->_name = src._name; std::cout << " Zombie is copied " << std::endl; }
Zombie	&Zombie::operator=(const Zombie &rhs) { this->_name = rhs._name; std::cout << " Zombie copy assig " << std::endl; return (*this); }
