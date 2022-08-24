/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:34:38 by hyap              #+#    #+#             */
/*   Updated: 2022/08/24 18:18:04 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		std::cout << "Usage: ./main [ClapTrap] [DiamondTrap]" << std::endl;
		return (0);
	}

	std::string	clap(av[1]);
	std::string diamond(av[2]);
	ClapTrap	claptrap(clap);
	DiamondTrap	diamondtrap(diamond);
	
	diamondtrap.whoAmI();
	
	claptrap.attack(diamondtrap.get_name());
	diamondtrap.takeDamage(claptrap.get_dmg());
	
	diamondtrap.attack(claptrap.get_name());
	claptrap.takeDamage(diamondtrap.get_dmg());

	return (0);
}
