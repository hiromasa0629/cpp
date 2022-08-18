/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 01:42:18 by hyap              #+#    #+#             */
/*   Updated: 2022/08/19 02:02:17 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	this->_f[0] = &Harl::_debug;
	this->_f[1] = &Harl::_info;
	this->_f[2] = &Harl::_warning;
	this->_f[3] = &Harl::_error;
	this->_levels[0] = "DEBUG";
	this->_levels[1] = "INFO";
	this->_levels[2] = "WARNING";
	this->_levels[3] = "ERROR";
}

Harl::~Harl(void)
{
	std::cout << "Destructing Harl..." << std::endl;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_levels[i] == level)
		{
			(this->*_f[i])();
			return ;
		}
	}
	std::cout << "Incorrect level provided!" << std::endl;
}

void	Harl::_debug(void) const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::_info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error(void) const
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
