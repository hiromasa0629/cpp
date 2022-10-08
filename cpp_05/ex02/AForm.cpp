/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:39:30 by hyap              #+#    #+#             */
/*   Updated: 2022/09/24 21:14:36 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <sstream>

/***********************************
 * Constructors
***********************************/

AForm::AForm(void) : _name("NoName"), _signed(false), _minGradeToSign(0), _minGradeToExecute(0)
{
	std::cout << "[AForm] Default constructor called" << std::endl;
}

AForm::AForm(const AForm &src) : _name(src.getName()), _minGradeToSign(src.getMinGradeToSign()), _minGradeToExecute(src.getMinGradeToExecute())
{
	*this = src;
	std::cout << "[AForm] Copy constructor called" << std::endl;
}

AForm	&AForm::operator=(const AForm &rhs)
{
	this->_signed = rhs.getSigned();
	std::cout << "[AForm] copy assignment called" << std::endl;
	return (*this);
}

AForm::AForm(const std::string name, const int minGradeToSign, const int minGradeToExecute) : _name(name), _signed(false), _minGradeToSign(minGradeToSign), _minGradeToExecute(minGradeToExecute)
{
	if (minGradeToSign > 150 || minGradeToExecute > 150)
		throw GradeTooLowException();
	else if (minGradeToSign < 1 || minGradeToExecute < 1)
		throw GradeTooHighException();
	std::cout << "[AForm] NameGradeSigned constructor called" << std::endl;
}

/***********************************
 * Getters
***********************************/

const std::string	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getSigned(void) const
{
	return (this->_signed);
}

int	AForm::getMinGradeToSign(void) const
{
	return (this->_minGradeToSign);
}

int AForm::getMinGradeToExecute(void)const
{
	return (this->_minGradeToExecute);
}

std::string	AForm::getTarget(void) const
{
	return (this->_target);
}

/***********************************
 * Functions
***********************************/

void	AForm::beSigned(const Bureaucrat &bur)
{
	if (this->getMinGradeToSign() < bur.getGrade())
		throw GradeTooLowException(bur, M_SIGN);
	this->_signed = true;
}

/***********************************
 * Destructors
***********************************/

AForm::~AForm(void)
{
	std::cout << "[AForm] Dustructing..." << std::endl;
}

/***********************************
 * Nested class
***********************************/

const char	*AForm::GradeTooHighException::what(void) const throw()
{
	return (this->_msg.c_str());
}

const char	*AForm::GradeTooLowException::what(void) const throw()
{
	return (this->_msg.c_str());
}

const char	*AForm::FormNotSigned::what(void) const throw()
{
	return (this->_msg.c_str());
}

AForm::GradeTooHighException::GradeTooHighException(void) : _msg("GRADE TOO HIGH FOR MIN") {}

AForm::GradeTooLowException::GradeTooLowException(void) : _msg("GRADE TOO LOW FOR MIN") {}

AForm::FormNotSigned::FormNotSigned(const AForm &form)
{
	std::stringstream	ss;
	
	ss << form.getName() << " is not signed yet !";
	this->_msg = ss.str();
}

AForm::GradeTooLowException::GradeTooLowException(const Bureaucrat &bur, const int method)
{
	std::stringstream	ss;
	
	if (method == M_SIGN)
		ss << bur.getName() << "'s grade: " << bur.getGrade() << ", GRADE TOO LOW TO SIGN";
	else if (method == M_EXECUTE)
		ss << bur.getName() << "'s grade: " << bur.getGrade() << ", GRADE TOO LOW TO EXECUTE";
	this->_msg = ss.str();
}

AForm::GradeTooHighException::~GradeTooHighException(void) throw() {}

AForm::GradeTooLowException::~GradeTooLowException(void) throw() {}

AForm::FormNotSigned::~FormNotSigned(void) throw() {}

/***********************************
 * Operator Overload
***********************************/

std::ostream	&operator<<(std::ostream &o, const AForm &rhs)
{
	o << rhs.getName() << ", signed: " << rhs.getSigned() << ", minGradeToSigned: " << rhs.getMinGradeToSign() << ", minGradeToExecute: " << rhs.getMinGradeToExecute();
	return (o);
}
