/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:00:40 by hyap              #+#    #+#             */
/*   Updated: 2022/10/18 16:40:34 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/***********************************
 * Constructors
***********************************/

Span::Span(void) : _span(0), _size(0), _num_added(0)
{

}

Span::Span(const Span &src)
{
	*this = src;
}

Span	&Span::operator=(const Span &rhs)
{
	this->_span = rhs._span;
	this->_size = rhs._size;
	this->_num_added = rhs._num_added;
	return (*this);
}

Span::Span(unsigned int N) : _span(N), _size(N), _num_added(0)
{

}

/***********************************
*	Functions
***********************************/

void	Span::addNumber(int N)
{
	if (_num_added == _size)
		throw FullSpan();
	std::vector<int>::iterator	it = _span.begin() + _num_added;
	*it = N;
	_num_added++;
}

unsigned int	Span::shortestSpan(void)
{
	std::vector<int>::iterator it;
	int res;
	int diff;

	if (_span.empty() || _num_added == 1 || _num_added == 0)
		throw InvalidSpan();
	std::sort(_span.begin(), _span.end(), sortCompare);
	it = _span.begin();
	res = std::abs(*it - *(it + 1));
	it++;
	for (; it != (_span.end() - 1); it++)
	{
		diff = std::abs(*it - *(it + 1));
		if (res > diff)
			res = diff;
	}
	return (res);
}

unsigned int	Span::longestSpan(void)
{
	std::sort(_span.begin(), _span.end(), sortCompare);
	return (std::abs(_span.front() - _span.back()));
}

void	Span::fillSpan(void)
{
	std::srand(std::time(NULL));
	std::generate(_span.begin(), _span.end(), randomNumber);
	this->_num_added = this->_size;
}


/***********************************
*	Exceptions
***********************************/

const char	*Span::InvalidSpan::what(void) const throw()
{
	return ("Couldn't Find Span !");
}

const char	*Span::FullSpan::what(void) const throw()
{
	return ("Span is Full !");
}

/***********************************
 * Destructors
***********************************/

Span::~Span(void)
{

}

/***********************************
*	Operators Overload
***********************************/

std::ostream	&operator<<(std::ostream &o, Span &rhs)
{
	std::vector<int>::iterator	it;

	it = rhs._span.begin();
	for (; it != rhs._span.end(); it++)
	{
		o << *it;
		if ((it + 1) != rhs._span.end())
			o << ", ";
	}
	return (o);
}

/***********************************
*	Custom Functions
***********************************/

int	randomNumber(void)
{
	return (std::rand() % 10000000);
}

bool	sortCompare(int a, int b)
{
	return (a < b);
}
