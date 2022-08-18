/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 01:53:53 by hyap              #+#    #+#             */
/*   Updated: 2022/08/18 22:26:36 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **argv)
{
	Zombie	*zombies;
	int		N;

	if (ac != 3)
	{
		std::cout << "./main [Number of zombies] [Name]" << std::endl;
		return (0);
	}
	N = std::atoi(argv[1]);
	zombies = zombieHorde(N, argv[2]);
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete[] zombies;
	system("leaks main");
	return (0);
}
