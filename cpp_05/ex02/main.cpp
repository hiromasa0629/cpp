/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:00:15 by hyap              #+#    #+#             */
/*   Updated: 2022/10/08 20:31:32 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	testForm(const std::string type)
{
	AForm	*form = NULL;
	AForm	*cpform = NULL;
	
	int prograde = 0;
	int noobgrade = 0;
	int middlegrade = 0;
	
	if (type == "shrubbery")
	{
		std::cout << "====== ShurbberyCreationForm ======\n" << std::endl;
		ShrubberyCreationForm *tmp = new ShrubberyCreationForm("Home");
		form = tmp;
		cpform	= new ShrubberyCreationForm(*tmp);
		prograde = 50;
		noobgrade = 146;
		middlegrade = 140;
	}
	else if (type == "robotomy")
	{
		std::cout << "====== RobotomyRequestForm ======\n" << std::endl;
		RobotomyRequestForm	*tmp = new RobotomyRequestForm("Robb");
		form = tmp;
		cpform = new RobotomyRequestForm(*tmp);
		prograde = 30;
		noobgrade = 146;
		middlegrade = 60;
	}
	else if (type == "presidential")
	{
		std::cout << "====== PresidentialPardonForm ======" << std::endl;
		PresidentialPardonForm	*tmp = new PresidentialPardonForm("Obama");
		form = tmp;
		cpform = new PresidentialPardonForm(*tmp);
		prograde = 3;
		noobgrade = 146;
		middlegrade = 20;
	}
	else
		return ;

	Bureaucrat				probur("ProBur", prograde);
	Bureaucrat				noobbur("NoobBur", noobgrade);
	Bureaucrat				middlebur("MiddleBur", middlegrade);

	std::cout << std::endl;
	std::cout << "*** Initialize ***" << std::endl;
	std::cout << "form: " << *form << std::endl;
	std::cout << "cpform: " << *cpform << std::endl;
	std::cout << probur << std::endl;
	std::cout << noobbur << std::endl;
	std::cout << middlebur << std::endl;
	std::cout << "*** End ***" << std::endl;
	std::cout << std::endl;

	std::cout << "*** Test MiddleBur with cpform ***" << std::endl;
	middlebur.signForm(*cpform);
	middlebur.executeForm(*cpform);
	std::cout << "*** End ***\n" << std::endl;

	std::cout << "*** Test FormNotSigned ***" << std::endl;
	probur.executeForm(*form); // Not signed
	std::cout << "*** End ***\n" << std::endl;
	
	std::cout << "*** Test GradeTooLow ***" << std::endl;
	noobbur.signForm(*form); // GradeTooLow
	probur.signForm(*form);
	noobbur.executeForm(*form); // GradeTooLow
	probur.executeForm(*form);
	std::cout << "*** End ***" << std::endl;
	std::cout << std::endl;
	
	delete form;
	delete cpform;
}



int main(int ac, char **av)
{
	(void)ac;
	
	if (ac != 2)
	{
		std::cout << "./main \"form name\" (shrubbery, robotomy, presidential)" << std::endl;
		return (1);
	}
	testForm(std::string(av[1]));
	return (0);
}
