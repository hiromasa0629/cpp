/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Char.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:40:38 by hyap              #+#    #+#             */
/*   Updated: 2022/10/13 17:01:53 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Char.hpp"
#include <sstream>

/***********************************
 * Constructors
***********************************/

Char::Char(void)
{

}

Char::Char(const Char &src)
{
	*this = src;
}

Char	&Char::operator=(const Char &rhs)
{
	this->setMsg(rhs.getMsg());
	return (*this);
}

Char::Char(const Conversion &converted)
{
	const int 			type = converted.getType();
	const std::string	arg = converted.getArg();
	const int			sign = converted.getSign();
	std::stringstream	ss;
	long				num;
	char				*endptr;
	
	if (type == T_NAN || type == T_IMPOSSIBLE)
		ss << "char: impossible";
	else if (type == T_CHAR)
		ss << "char: '" << arg[0] << "'";
	else if (type == T_INT || type == T_DOUBLE || type == T_FLOAT)
	{
		num = strtol(arg.c_str(), &endptr, 10) * (sign == S_NEG ? -1 : 1);
		if (num >= 32 && num <= 127)
			ss << "char: '" << static_cast<char>(num) << "'";
		else if (num == 0 && (type == T_DOUBLE || type == T_FLOAT))
			ss << "char: impossible";
		else
			ss << "char: Non displayable";
	}
	this->setMsg(ss.str());
}

/***********************************
 * Destructors
***********************************/

Char::~Char(void)
{

}
