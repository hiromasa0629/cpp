/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:45:16 by hyap              #+#    #+#             */
/*   Updated: 2022/10/13 22:05:17 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

/***********************************
 * Constructors
***********************************/

A::A(void)
{

}

A::A(const A &src)
{
	*this = src;
}

A	&A::operator=(const A &rhs)
{
	(void)rhs;
	return (*this);
}

/***********************************
 * Destructors
***********************************/

A::~A(void)
{

}
