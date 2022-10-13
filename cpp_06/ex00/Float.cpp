/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Float.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:07:05 by hyap              #+#    #+#             */
/*   Updated: 2022/10/13 17:59:48 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Float.hpp"
#include <sstream>
#include <limits>
#include <float.h>
#include <iomanip>

/***********************************
 * Constructors
***********************************/

Float::Float(void)
{

}

Float::Float(const Float &src)
{
	*this = src;
}

Float	&Float::operator=(const Float &rhs)
{
	this->setMsg(rhs.getMsg());
	return (*this);
}

Float::Float(const Conversion &converted)
{
	const std::string	arg = converted.getArg();
	const int			type = converted.getType();
	const int			sign= converted.getSign();
	char				*endptr;
	char				*dot;
	float				fnum;
	size_t				precision_num = 1;
	std::stringstream	ss;
	
	if (type == T_NAN)
		ss << "float: nanf";
	else if (type == T_IMPOSSIBLE)
		ss << "float: impossible";
	else if (type == T_CHAR)
		ss << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(arg[0]) << "f";
	else if (type == T_INT || type == T_FLOAT || type == T_DOUBLE)
	{
		fnum = std::strtof(arg.c_str(), &endptr) * (sign == S_NEG ? -1 : 1);
		std::strtol(arg.c_str(), &dot, 10);
		if (*dot == '.')
		{
			dot++;
			for (size_t i = 0; dot[i]; i++)
			{
				if (dot[i] >= '0' && dot[i] <= '9')
					precision_num = i + 1;
				else
					break ;
			}
		}
		if (fnum > FLT_MAX || fnum < -FLT_MAX)
			ss << "float: " << (sign == S_NEG ? "-" : "") << "inff";
		else
			ss << "float: " << std::fixed << std::setprecision(precision_num) << fnum << "f";
	}
	this->setMsg(ss.str());
}

/***********************************
 * Destructors
***********************************/

Float::~Float(void)
{
	
}
