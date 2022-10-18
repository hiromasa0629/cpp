/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:02:18 by hyap              #+#    #+#             */
/*   Updated: 2022/10/18 18:39:36 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

/***********************************
 * Constructors
***********************************/

template <typename T>
MutantStack<T>::MutantStack(void)
{

}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &src)
{
	*this = src;
}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &rhs)
{
	(void)rhs;
	return (*this);
}

/***********************************
*	Functions
***********************************/

template <typename T>
typename MutantStack<T>::iterator_type	MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator_type	MutantStack<T>::end(void)
{
	return (this->c.end());
}

/***********************************
 * Destructors
***********************************/

template <typename T>
MutantStack<T>::~MutantStack(void)
{

}

