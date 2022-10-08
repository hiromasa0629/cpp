/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:22:05 by hyap              #+#    #+#             */
/*   Updated: 2022/10/08 20:16:31 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/***********************************
 * Constructors
***********************************/

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = "None";
	std::cout << "[PresidentialPardonForm] Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src.getName(), 25, 5)
{
	*this = src;
	std::cout << "[PresidentialPardonForm] Copy constructor called" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	this->_target = rhs.getTarget();
	std::cout << "[PresidentialPardonForm] Copy assignment called" << std::endl;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
	std::cout << "[PresidentialPardonForm] Target constructor called" << std::endl;
}

/***********************************
 * Functions
***********************************/

void	PresidentialPardonForm::execute(const Bureaucrat &bur) const
{
	if (!this->getSigned())
		throw FormNotSigned(*this);
	if (bur.getGrade() > this->getMinGradeToExecute())
		throw GradeTooLowException(bur, M_EXECUTE);
	std::cout << this->getTarget() + " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm	*PresidentialPardonForm::clone(void) const
{
	return new PresidentialPardonForm(*this);
}

/***********************************
 * Destructors
***********************************/

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "[PresidentialPardonForm] Destructor called" << std::endl;
}
