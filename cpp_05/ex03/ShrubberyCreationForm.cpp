/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:20:33 by hyap              #+#    #+#             */
/*   Updated: 2022/10/08 20:13:28 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <string>
#include <sstream>

/***********************************
 * Constructors
***********************************/

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = "None";
	std::cout << "[ShrubberyCreationForm] Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src.getName(), 145, 137)
{
	*this = src;
	std::cout << "[ShrubberyCreationForm] Copy constructor called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	this->_target = rhs.getTarget();
	std::cout << "[ShrubberyCreationForm] Copy assignment called" << std::endl;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
	std::cout << "[ShrubberyCreationForm] Target constructor called" << std::endl;
}

/***********************************
 * Functions
***********************************/

void	ShrubberyCreationForm::execute(const Bureaucrat &bur) const
{
	if (this->getSigned() != 1)
		throw FormNotSigned(*this);
	if (bur.getGrade() > this->getMinGradeToExecute())
		throw GradeTooLowException(bur, M_EXECUTE);
	else
	{
		std::ofstream		out(this->getTarget() + "_shrubbery");
		std::stringstream	ss;
		
		ss << "         v         \n";
		ss << "        >X<        \n";
		ss << "         A         \n";
		ss << "        d$b        \n";
		ss << "      .d\\$$b.      \n";
		ss << "    .d$i$$\\$$b.    \n";
		ss << "       d$$@b       \n";
		ss << "      d\\$$$ib      \n";
		ss << "    .d$$$\\$$$b     \n";
		ss << "  .d$$@$$$$\\$$ib.  \n";
		ss << "      d$$i$$b      \n";
		ss << "     d\\$$$$@$b     \n";
		ss << "  .d$@$$\\$$$$$@b.  \n";
		ss << ".d$$$$i$$$\\$$$$$$b.\n";
		ss << "        ###        \n";
		ss << "        ###        \n";
		ss << "        ###        \n";
		out << ss.str() << std::endl;
		out.close();
	}
}

ShrubberyCreationForm	*ShrubberyCreationForm::clone(void) const
{
	return new ShrubberyCreationForm(*this);
}

/***********************************
 * Destructors
***********************************/

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "[ShrubberyCreationForm] Destructor called" << std::endl;
}

