/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Int.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:55:00 by hyap              #+#    #+#             */
/*   Updated: 2022/10/13 18:03:17 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Int.hpp"
#include <sstream>

/***********************************
 * Constructors
***********************************/

Int::Int(void)
{

}

Int::Int(const Int &src)
{
	*this = src;
}

Int	&Int::operator=(const Int &rhs)
{
	this->setMsg(rhs.getMsg());
	return (*this);
}

Int::Int(const Conversion &converted)
{
	const int			type = converted.getType();
	const std::string	arg = converted.getArg();
	const int			sign = converted.getSign();
	std::stringstream	ss;
	char				*endptr;
	long				num;
	
	if (type == T_IMPOSSIBLE || type == T_NAN)
		ss << "int: impossbile";
	else if (type == T_CHAR)
		ss << "int: " << static_cast<int>(arg[0]);
	else if (type == T_INT || type == T_DOUBLE || type == T_FLOAT)
	{
		num = strtol(arg.c_str(), &endptr, 10) * (sign == S_NEG ? -1 : 1);
		if (num > INT_MAX || num < INT_MIN)
			ss << "int: impossible";
		else if ((type == T_DOUBLE || type == T_FLOAT) && (std::strncmp(arg.c_str(), "inf", 3) == 0))
			ss << "int: impossible";
		else
			ss << "int: " << num;
	}
	this->setMsg(ss.str());
}

/***********************************
 * Destructors
***********************************/

Int::~Int(void)
{

}
