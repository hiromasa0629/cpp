/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 01:41:48 by hyap              #+#    #+#             */
/*   Updated: 2022/08/19 02:26:38 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl		harl;
	std::string	arg;

	std::cout << "1. DEBUG" << std::endl;
	std::cout << "2. INFO" << std::endl;
	std::cout << "3. WARNING" << std::endl;
	std::cout << "4. ERROR" << std::endl;
	std::cout << std::endl;

	while (1)
	{
		std::cout << "Level: " << std::ends;
		std::getline(std::cin, arg);
		if (arg.length() < 1)
			return (0);
		harl.complain(arg);
	}
	return (0);
}
