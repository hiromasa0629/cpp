/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:32:52 by hyap              #+#    #+#             */
/*   Updated: 2022/10/14 18:50:54 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _array(NULL), _size(0)
{
	
}

template <typename T>
Array<T>::Array(const unsigned int n) : _array(new T[n]), _size(n)
{
	
}

template <typename T>
Array<T>::Array(const Array &src) : _array(NULL), _size(0)
{
	*this = src;
}

template <typename T>
T	&Array<T>::operator[](unsigned int i) const
{
	if (i >= this->size())
		throw OutOfBoundException();
	return (this->_array[i]);
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &rhs)
{
	T	*arr;
	
	this->_size = rhs.size();
	if (this->_array)
		delete this->_array;
	arr = new T[rhs.size()];
	for (size_t i = 0; i < rhs.size(); i++)
		arr[i] = rhs._array[i];
	this->_array = arr;
	return (*this);
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->_size);
}

template <typename T>
Array<T>::~Array(void)
{
	
}
