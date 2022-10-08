/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:21:29 by hyap              #+#    #+#             */
/*   Updated: 2022/10/08 20:15:21 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/***********************************
 * Constructors
***********************************/

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = "None";
	std::cout << "[RobotomyRequestForm] Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src.getName(), 72, 45)
{
	*this = src;
	std::cout << "[RobotomyRequestForm] Copy constructor called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	this->_target = rhs.getTarget();
	std::cout << "[RobotomyRequestForm] Copy assignment called" << std::endl;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
	std::cout << "[RobotomyRequestForm] Target Constructor called"  << std::endl;
}

/***********************************
 * Functions
***********************************/

void RobotomyRequestForm::execute(const Bureaucrat &bur) const
{	
	if (!this->getSigned())
		throw FormNotSigned(*this);
	if (bur.getGrade() > this->getMinGradeToExecute())
		throw GradeTooLowException(bur, M_EXECUTE);
	std::cout << "drdrdrddrdrdrdrdrdrdrdrdrdrdrd robotmizing..." << std::endl;
	if (rand() % 2)
		std::cout << this->getTarget() + " has been robotomized successfully !" << std::endl;
	else
		std::cout << this->getTarget() + " has been failed to robotomized !" << std::endl;
}

RobotomyRequestForm	*RobotomyRequestForm::clone(void) const
{
	return new RobotomyRequestForm(*this);
}

/***********************************
 * Destructors
***********************************/

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "[RobotomyRequestForm] Destructor called" << std::endl;
}
