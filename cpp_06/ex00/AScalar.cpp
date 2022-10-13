/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AScalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:14:10 by hyap              #+#    #+#             */
/*   Updated: 2022/10/10 17:16:03 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AScalar.hpp"

/***********************************
 * Constructors
***********************************/

AScalar::AScalar(void)
{

}

AScalar::AScalar(const AScalar &src)
{
	*this = src;
}

AScalar	&AScalar::operator=(const AScalar &rhs)
{
	(void)rhs;
	return (*this);
}

/***********************************
 * Getters
***********************************/

std::string	AScalar::getMsg(void) const
{
	return (this->_msg);
}

/***********************************
 * Setters
***********************************/

void	AScalar::setMsg(const std::string msg)
{
	this->_msg = msg;
}

/***********************************
 * Functions
***********************************/

void	AScalar::print(void) const
{
	std::cout << this->getMsg() << std::endl;
}

/***********************************
 * Destructors
***********************************/

AScalar::~AScalar(void)
{

}
