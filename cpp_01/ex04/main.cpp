/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 00:00:38 by hyap              #+#    #+#             */
/*   Updated: 2022/08/19 01:37:28 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int ac, char **av)
{
	Sed			sed;
	std::string	filein;

	if (ac != 4)
	{
		std::cout << "Usage: ./main [file] [string_one] [string_two]" << std::endl;
		return (0);
	}
	filein.assign(av[1]);
	if (!sed.setFilein(filein))
		return (0);
	if (!sed.setFileout(filein.append(".replace")))
		return (0);
	sed.replaceString(av[2], av[3]);
	return (0);
}
