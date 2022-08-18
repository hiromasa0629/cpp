/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 02:31:43 by hyap              #+#    #+#             */
/*   Updated: 2022/08/18 22:26:02 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
&s is the address of "HI THIS IS BRAIN"
&stringPTR is the address of the pointer which is pointing to the address of "HI THIS IS BRAIN"
&stringREF is the address of the references to "HI THIS IS BRAIN"

s returns "HI THIS IS BRAIN"
stringPTR returns the address of "HI THIS IS BRAIN" because it is a pointer pointing to the address
stringREF returns "HI THIS IS BRAIN" because it's only referencing the the string
*/
int	main(void)
{
	std::string	s = "HI THIS IS BRAIN";
	std::string *stringPTR = &s;
	std::string	&stringREF = s;

	std::cout << "Memory address of s: " << &s << std::endl;
	std::cout << "Memory address of stringPTR: " << &stringPTR << std::endl;
	std::cout << "Memory address of stringREF: " << &stringREF << std::endl;

	std::cout << "String value of s: " << s << std::endl;
	std::cout << "String value of stringPTR: " << stringPTR << std::endl;
	std::cout << "String value of stringREF: " << stringREF << std::endl;

	return (0);
}
