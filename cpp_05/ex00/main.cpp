/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:00:15 by hyap              #+#    #+#             */
/*   Updated: 2022/09/24 16:29:00 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat	invalid("Invalid", 151);
	}
	catch (const Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "GradeTooHighException " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "GradeTooLowException " << e.what() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	
	
	Bureaucrat	low("LowBureaucrat", 150);
	Bureaucrat	high("HighBureaucrat", 1);
	
	std::cout << low << std::endl;
	std::cout << high << std::endl;
	
	Bureaucrat noname;
	noname = low;
	
	std::cout << noname << std::endl;
	
	try
	{
		std::cout << "Decrementing..." << noname << std::endl;
		noname.decrementGrade();
		std::cout << noname << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
		
		std::cout << "GradeTooLowException " << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		std::cout << "Incrementing..." << high << std::endl;
		high.incrementGrade();
		std::cout << high << std::endl;
	}
	catch  (const Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "GradeTooHighException " << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}
