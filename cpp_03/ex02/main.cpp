/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:34:38 by hyap              #+#    #+#             */
/*   Updated: 2022/08/24 14:49:00 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: ./main [ClapTrap] [ScavTrap] [FragTrap]" << std::endl;
		return (0);
	}

	std::string	clap(av[1]);
	std::string scav(av[2]);
	std::string frag(av[3]);
	
	ClapTrap	claptrap(clap);
	ScavTrap	scavtrap(scav);
	FragTrap	fragtrap(frag);

	claptrap.attack(scavtrap.get_name());
	scavtrap.takeDamage(claptrap.get_dmg());
	scavtrap.attack(claptrap.get_name());
	claptrap.takeDamage(scavtrap.get_dmg());
	scavtrap.attack(claptrap.get_name());
	claptrap.takeDamage(scavtrap.get_dmg());
	scavtrap.beRepaired(3);
	scavtrap.guardGate();
	fragtrap.highFivesGuys();

	return (0);
}
