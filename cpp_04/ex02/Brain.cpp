/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:07:03 by hyap              #+#    #+#             */
/*   Updated: 2022/09/03 19:47:41 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/***********************************
 * Contructors
***********************************/

Brain::Brain(void)
{
	std::cout << "[Brain] Constructor called" << std::endl;
}

Brain::Brain(const Brain &a)
{
	*this = a;
}

Brain	&Brain::operator=(const Brain &rhs)
{
	std::memcpy(this->_ideas, rhs._ideas, sizeof(rhs._ideas)/sizeof(rhs._ideas[0]));
	return (*this);
}

/***********************************
 * Destructors
***********************************/

Brain::~Brain(void)
{
	std::cout << "[Brain] Destructing..." << std::endl;
}
