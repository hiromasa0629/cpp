/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:19:10 by hyap              #+#    #+#             */
/*   Updated: 2022/10/13 21:36:50 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/***********************************
 * Constructors
***********************************/

Data::Data(void) : _str("Data Structure")
{

}

Data::Data(const Data &src)
{
	*this = src;
}

Data	&Data::operator=(const Data &rhs)
{
	this->_str = rhs.getStr();
	return (*this);
}

/***********************************
 * Getters
***********************************/

std::string	Data::getStr(void) const
{
	return (this->_str);
}

/***********************************
 * Destructors
***********************************/

Data::~Data(void)
{

}

/***********************************
 * Operator Overloads
***********************************/

std::ostream	&operator<<(std::ostream &o, const Data &data)
{
	o << data.getStr();
	return (o);
}
