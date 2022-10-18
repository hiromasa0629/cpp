/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:15:31 by hyap              #+#    #+#             */
/*   Updated: 2022/10/18 19:20:17 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./megaphone.hpp"

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	for (int i = 1; i < ac; i++)
	{
		for (size_t j = 0; j < std::strlen(av[i]); j++)
			std::putchar(std::toupper(av[i][j]));
	}
	std::cout << std::endl;
	return (0);
}
