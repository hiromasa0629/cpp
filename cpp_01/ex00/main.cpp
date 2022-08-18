/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 01:46:14 by hyap              #+#    #+#             */
/*   Updated: 2022/08/18 22:30:28 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
Zombie	*newZombie(std::string name) creates a zombie using new and also allocating a zombie memory
in the heap and returns a pointer pointing to the newly created Zombie. Thus we could use the pointer
and call its member function etc.

void	randomChump(std::string name) only initialize zombie in stack so when the function finish,
it will be gone and the Zombie destructor will be called
*/
int	main(void)
{
	Zombie		*zombie;
	std::string	tmp;

	zombie = newZombie("Heap Zombie");
	randomChump("Stack Zombie");

	std::getline(std::cin, tmp);
	if (tmp == "next")
	{
		zombie->announce();
		delete zombie;
	}
	return (0);
}
