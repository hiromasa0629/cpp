/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:39:30 by hyap              #+#    #+#             */
/*   Updated: 2022/09/24 21:14:36 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <sstream>

/***********************************
 * Constructors
***********************************/

Form::Form(void) : _name("NoName"), _signed(false), _minGradeToSign(0), _minGradeToExecute(0)
{
	std::cout << "[Form] Default constructor called" << std::endl;
}

Form::Form(const Form &src) : _name(src.getName()), _minGradeToSign(src.getMinGradeToSign()), _minGradeToExecute(src.getMinGradeToExecute())
{
	*this = src;
	std::cout << "[Form] Copy constructor called" << std::endl;
}

Form	&Form::operator=(const Form &rhs)
{
	this->_signed = rhs.getSigned();
	std::cout << "[Form] copy assignment called" << std::endl;
	return (*this);
}

Form::Form(const std::string name, const int minGradeToSign, const int minGradeToExecute) : _name(name), _signed(false), _minGradeToSign(minGradeToSign), _minGradeToExecute(minGradeToExecute)
{
	if (minGradeToSign > 150 || minGradeToExecute > 150)
		throw Form::GradeTooLowException();
	else if (minGradeToSign < 1 || minGradeToExecute < 1)
		throw Form::GradeTooHighException();
	std::cout << "[Form] NameGradeSigned constructor called" << std::endl;
}

/***********************************
 * Getters
***********************************/

const std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

int	Form::getMinGradeToSign(void) const
{
	return (this->_minGradeToSign);
}

int Form::getMinGradeToExecute(void)const
{
	return (this->_minGradeToExecute);
}

/***********************************
 * Functions
***********************************/

void	Form::beSigned(const Bureaucrat &bur)
{
	if (this->getMinGradeToSign() < bur.getGrade())
		throw Form::GradeTooLowException(bur);
	this->_signed = true;
}

/***********************************
 * Destructors
***********************************/

Form::~Form(void)
{
	std::cout << "[Form] Dustructing..." << std::endl;
}

/***********************************
 * Nested class
***********************************/

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return (this->_msg.c_str());
}

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return (this->_msg.c_str());
}

Form::GradeTooHighException::GradeTooHighException(void) : _msg("GRADE TOO HIGH FOR MIN")
{
	
}

Form::GradeTooLowException::GradeTooLowException(void) : _msg("GRADE TOO LOW FOR MIN")
{
	
}

Form::GradeTooLowException::GradeTooLowException(const Bureaucrat &bur)
{
	std::stringstream	ss;
	
	ss << bur.getName() << "'s grade: " << bur.getGrade() << ", GRADE TOO LOW";
	this->_msg = ss.str();
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
	
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
	
}

/***********************************
 * Operator Overload
***********************************/

std::ostream	&operator<<(std::ostream &o, const Form &rhs)
{
	o << rhs.getName() << ", signed: " << rhs.getSigned() << ", minGradeToSigned: " << rhs.getMinGradeToSign() << ", minGradeToExecute: " << rhs.getMinGradeToExecute() << std::endl;
	return (o);
}
