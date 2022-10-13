/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:21:01 by hyap              #+#    #+#             */
/*   Updated: 2022/10/13 17:52:23 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

/***********************************
 * Constructors
***********************************/

Conversion::Conversion(void) : _type(0), _arg("")
{

}

Conversion::Conversion(const Conversion &src) : _arg(src._arg)
{
	*this = src;
}

Conversion	&Conversion::operator=(const Conversion &rhs)
{
	this->setType(rhs.getType());
	return (*this);
}

Conversion::Conversion(std::string arg) : _arg(arg)
{
	this->setSign(S_POS);
	if (arg[0] == '-' || arg[0] == '+')
	{
		if (arg[0] == '-')
			this->setSign(S_NEG);
		if (!isDigit(arg[1]) && (std::strncmp(&arg[1], "inf", 3) != 0))
			this->setType(T_IMPOSSIBLE);
		this->setArg(arg.erase(0,1));
	}
	if (this->getType() == T_IMPOSSIBLE)
		return ;
	if (arg.length() < 1)
		this->setType(T_IMPOSSIBLE);
	else if (!arg.compare("nan") || !arg.compare("nanf"))
		this->setType(T_NAN);
	else if (arg.length() == 1 && !isDigit(arg[0]))
		this->setType(T_CHAR);
	else if (isInt(arg))
		this->setType(T_INT);
	else if (isFloat(arg))
		this->setType(T_FLOAT);
	else if (isDouble(arg))
		this->setType(T_DOUBLE);
	else
		this->setType(T_IMPOSSIBLE);
}

/***********************************
 * Getters
***********************************/

int	Conversion::getType(void) const
{
	return (this->_type);
}

std::string Conversion::getArg(void) const
{
	return (this->_arg);
}

int	Conversion::getSign(void) const
{
	return (this->_sign);
}

/***********************************
 * Setters
***********************************/

void	Conversion::setType(const int type)
{
	this->_type = type;
}

void	Conversion::setSign(const int sign)
{
	this->_sign = sign;
}

void	Conversion::setArg(std::string arg)
{
	this->_arg = arg;
}

/***********************************
 * Functions
***********************************/

bool	Conversion::isDigit(char c) const
{
	if (c >= '0' && c <= '9')
		return (true);
	return (false);
}

bool Conversion::isInt(const std::string arg) const
{
	for (size_t i = 0; i < arg.length(); i++)
	{
		if (!isDigit(arg[i]) && arg[i] != '-' && arg[i] != '+')
			return (false);
	}
		
	return (true);
}

bool Conversion::isFloat(const std::string arg) const
{
	size_t		hasPrecision = 0;
	size_t		hasF = 0;
	std::string	list[] = {"inff", "+inff", "-inff"};
	
	for (size_t i = 0; i < list->length(); i++)
		if (!arg.compare(list[i]))
			return (true);
	for (size_t i = 0; i < arg.length(); i++)
	{
		if (!isDigit(arg[i]) && arg[i] != '.' && arg[i] != 'f')
			return (false);
		if (arg[i] == '.')
		{
			if (hasPrecision)
				return (false);
			hasPrecision = 1;
		}
		if (arg[i] == 'f')
		{
			if (hasF)
				return (false);
			hasF = 1;
		}
	}
	if (hasF && hasPrecision)
		return (true);
	return (false);
}

bool Conversion::isDouble(const std::string arg) const
{
	size_t		hasPrecision = 0;
	std::string	list[] = {"inf", "+inf", "-inf"};
	
	for (size_t i = 0; i < list->length(); i++)
		if (!arg.compare(list[i]))
			return (true);
	for (size_t i = 0; i < arg.length(); i++)
	{
		if (!isDigit(arg[i]) && arg[i] != '.')
			return (false);
		if (arg[i] == '.')
		{
			if (hasPrecision)
				return (false);
			hasPrecision = 1;
		}	
	}
	if (hasPrecision)
		return (true);
	return (false);
}

/***********************************
 * Destructors
***********************************/

Conversion::~Conversion(void)
{

}
