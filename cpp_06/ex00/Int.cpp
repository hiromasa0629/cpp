/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Int.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:55:00 by hyap              #+#    #+#             */
/*   Updated: 2022/10/10 18:09:43 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Int.hpp"

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

/***********************************
 * Functions
***********************************/

void	Int::fit(char *arg)
{
	std::stringstream	ss;
	char				*end;
	long				num;
	
	num = std::strtol(arg, &end, 10);
	if (isNanOrNull(arg))
		this->setMsg("int: non displayable");
	else if (num > INT_MAX || num < INT_MIN)
		this->setMsg("int: impossible");
	else
	{
		ss << "int: " << static_cast<int>(num);
		this->setMsg(ss.str());
	}
}

/***********************************
 * Destructors
***********************************/

Int::~Int(void)
{

}
