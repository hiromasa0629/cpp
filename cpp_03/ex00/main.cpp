/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:34:38 by hyap              #+#    #+#             */
/*   Updated: 2022/08/24 13:23:59 by hyap             ###   ########.fr       */
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
	ClapTrap	targetCP(target);

	claptrap.attack(target);
	targetCP.takeDamage(claptrap.get_dmg());
	claptrap.attack(target);
	targetCP.takeDamage(claptrap.get_dmg());
	targetCP.beRepaired(3);

	ClapTrap	copy_target(claptrap);
	copy_target.attack(target);
	targetCP.takeDamage(copy_target.get_dmg());

	return (0);
}
