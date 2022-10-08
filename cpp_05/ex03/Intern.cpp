/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:26:23 by hyap              #+#    #+#             */
/*   Updated: 2022/10/08 20:26:41 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/***********************************
 * Constructors
***********************************/

Intern::Intern(void)
{
	std::cout << "[Intern] Default constructor called" << std::endl;
}

Intern::Intern(const Intern &src)
{
	*this = src;
	std::cout << "[Intern] Copy constructor called" << std::endl;
}

Intern	&Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	std::cout << "[Intern] Copy assignment called" << std::endl;
	return (*this);
}

/***********************************
 * Functions
***********************************/

AForm	*Intern::makeShrubbery(const std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm	*Intern::makeRobotomy(const std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm	*Intern::makePresidential(const std::string target)
{
	return new PresidentialPardonForm(target);
}

AForm	*Intern::makeForm(const std::string name, const std::string target)
{
	std::string form_names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm	*(*makeFormsFunction[3])(const std::string target) = {this->makeShrubbery, this->makeRobotomy, this->makePresidential};
	for (size_t i = 0; i < 3; i++)
		if (name == form_names[i])
			return (makeFormsFunction[i])(target);
	throw InvalidFormName();
}

/***********************************
 * Exception
***********************************/

const char	*Intern::InvalidFormName::what() const throw()
{
	return ("Invalid form name !");
}

/***********************************
 * Destructors
***********************************/

Intern::~Intern(void)
{
	std::cout << "[Intern] Destructor called" << std::endl;
}
