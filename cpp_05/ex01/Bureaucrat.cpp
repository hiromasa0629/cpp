/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:21:09 by hyap              #+#    #+#             */
/*   Updated: 2022/09/24 17:26:40 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/***********************************
 * Constructors
***********************************/

Bureaucrat::Bureaucrat(void) : _name("NoName")
{
	std::cout << "[Bureaucrat] Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*this = src;
	std::cout << "[Bureaucrat] Copy constructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs.getGrade();
	std::cout << "[Bureaucrat] Copy assignment called" << std::endl;
	return (*this);
}

Bureaucrat::Bureaucrat(const std::string name, const int grade) : _name(name), _grade(grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "[Bureaucrat] NameGrade constructor called" << std::endl;
}

/***********************************
 * Getters
***********************************/

const std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

/***********************************
 * Functions
***********************************/

void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else	
		this->_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (const Form::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
		std::cerr << this->getName() << " couldn't sign " << form.getName() << " because GRADE TOO LOW" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

/***********************************
 * Destructors
***********************************/

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "[Bureaucrat] Destructing..." << std::endl;
}

/***********************************
 * Operator Overloads
***********************************/

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}
