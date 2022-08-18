/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 02:08:47 by hyap              #+#    #+#             */
/*   Updated: 2022/08/19 02:31:51 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	std::string arg;
	Harl		harl;

	if (ac != 2)
	{
		std::cout << "Usage: ./harlFilter [level]" << std::endl;
		return (0);
	}
	arg.assign(av[1]);
	harl.complain(arg);
}
