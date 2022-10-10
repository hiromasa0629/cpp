/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Char.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:40:38 by hyap              #+#    #+#             */
/*   Updated: 2022/10/10 18:14:44 by hyap             ###   ########.fr       */
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

/***********************************
 * Functions
***********************************/

void	Char::fit(char *arg)
{
	char				*end;
	long				num;
	std::stringstream	ss;
	
	num = std::strtol(arg, &end, 10);
	if (isNanOrNull(arg))
		this->setMsg("char: impossible");
	else if (std::strlen(arg) > 1 && !isFloatOrDoubleOrInt(end))
		this->setMsg("char: impossible");
	else if (!isPrintable(num) && !isPrintable(*arg))
		this->setMsg("char: Non displayable");
	else
	{
		
		ss << "char: '" << static_cast<char>(num ? num : *arg) << "'";
		this->setMsg(ss.str());
	}
}

bool	Char::isPrintable(long num) const
{
	if (num >= 32 && num <= 127)
		return (true);
	return (false);
}

/***********************************
 * Destructors
***********************************/

Char::~Char(void)
{

}
