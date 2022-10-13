/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Double.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:06:47 by hyap              #+#    #+#             */
/*   Updated: 2022/10/13 18:22:40 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Double.hpp"
#include <sstream>
#include <limits>
#include <float.h>
#include <iomanip>

/***********************************
 * Constructors
***********************************/

Double::Double(void)
{

}

Double::Double(const Double &src)
{
	*this = src;
}

Double	&Double::operator=(const Double &rhs)
{
	this->setMsg(rhs.getMsg());
	return (*this);
}

Double::Double(const Conversion &converted)
{
	const std::string	arg = converted.getArg();
	const int			type = converted.getType();
	const int			sign= converted.getSign();
	char				*endptr;
	char				*dot;
	double				dnum;
	size_t				precision_num = 1;
	std::stringstream	ss;
	
	if (type == T_NAN)
		ss << "double: nan";
	else if (type == T_IMPOSSIBLE)
		ss << "double: impossible";
	else if (type == T_CHAR)
		ss << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(arg[0]);
	else if (type == T_INT || type == T_FLOAT || type == T_DOUBLE)
	{
		dnum = std::strtod(arg.c_str(), &endptr) * (sign == S_NEG ? -1 : 1);
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
		if (dnum > DBL_MAX || dnum < -DBL_MAX)
			ss << "double: " << (sign == S_NEG ? "-" : "") << "inf";
		else
			ss << "double: " << std::fixed << std::setprecision(precision_num) << dnum;
	}
	this->setMsg(ss.str());
}

/***********************************
 * Destructors
***********************************/

Double::~Double(void)
{

}
