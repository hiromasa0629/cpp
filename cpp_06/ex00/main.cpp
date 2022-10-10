/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:10:43 by hyap              #+#    #+#             */
/*   Updated: 2022/10/10 17:51:19 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Char.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "./main [string literal]" << std::endl;
		return (1);
	}
	
	Char c;
	
	c.fit(av[1]);
	
	c.print();
	
	return (0);
}