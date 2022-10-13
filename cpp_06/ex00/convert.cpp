/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:10:43 by hyap              #+#    #+#             */
/*   Updated: 2022/10/13 18:12:31 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Char.hpp"
#include "Conversion.hpp"
#include "Int.hpp"
#include "Float.hpp"
#include "Double.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "./main [string literal]" << std::endl;
		return (1);
	}

	const std::string arg(av[1]);
	
	Conversion	conversion(arg);
	
	Char	character(conversion);
	Int		integer(conversion);
	Float	floaty(conversion);
	Double	doubly(conversion);

	character.print();
	integer.print();
	floaty.print();
	doubly.print();
	
	return (0);
}
