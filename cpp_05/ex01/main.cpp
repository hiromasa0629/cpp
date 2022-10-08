/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:00:15 by hyap              #+#    #+#             */
/*   Updated: 2022/09/24 21:20:38 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat noobbur("NoobBur", 123);
	std::cout << noobbur << std::endl;
	Bureaucrat probur("ProBur", 10);
	std::cout << probur << std::endl;
	
	try
	{
		Form	invalidForm("InvalidForm", 151, 130);
	}
	catch (const Form::GradeTooHighException &e)
	{
		std::cerr << "FORM GradeTooHighException " <<  e.what() << std::endl;
	}
	catch (const Form::GradeTooLowException &e)
	{
		std::cerr << "FORM GradeTooLowException " << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Form	validForm("validForm", 50, 50);
		
		noobbur.signForm(validForm);
		probur.signForm(validForm);
		
	}
	catch (const Form::GradeTooHighException &e)
	{
		std::cerr << "FORM GradeTooHighException " << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowException &e)
	{
		std::cerr << "FORM GradeTooLowException " << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
