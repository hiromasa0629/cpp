/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:15:31 by hyap              #+#    #+#             */
/*   Updated: 2022/08/14 12:28:36 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./megaphone.hpp"

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNCEARABLE FEEDBACK NOISE *" << std::ends;
	for (int i = 1; i < ac; i++)
		std::cout << av[i] << std::ends;
	std::cout << std::endl;
	return (0);
}
