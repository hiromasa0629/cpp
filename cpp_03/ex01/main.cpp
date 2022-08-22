/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:34:38 by hyap              #+#    #+#             */
/*   Updated: 2022/08/22 23:50:18 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		std::cout << "Usage: ./main [name] [target]" << std::endl;
		return (0);
	}

	std::string	name(av[1]);
	std::string target(av[2]);
	ClapTrap	claptrap(name);

	claptrap.attack(target);
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);

	ClapTrap	copyCP(claptrap);
	claptrap.beRepaired(2);

	return (0);
}
