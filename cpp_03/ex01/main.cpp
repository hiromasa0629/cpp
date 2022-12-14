/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:34:38 by hyap              #+#    #+#             */
/*   Updated: 2022/08/24 14:27:46 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		std::cout << "Usage: ./main [ClapTrap] [ScavTrap]" << std::endl;
		return (0);
	}

	std::string	name(av[1]);
	std::string target(av[2]);
	
	ClapTrap	claptrap(name);
	ScavTrap	scavtrap(target);


	claptrap.attack(scavtrap.get_name());
	scavtrap.takeDamage(claptrap.get_dmg());
	scavtrap.attack(claptrap.get_name());
	claptrap.takeDamage(scavtrap.get_dmg());
	scavtrap.attack(claptrap.get_name());
	claptrap.takeDamage(scavtrap.get_dmg());
	scavtrap.beRepaired(3);
	scavtrap.guardGate();

	return (0);
}
