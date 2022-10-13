/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:20:59 by hyap              #+#    #+#             */
/*   Updated: 2022/10/13 21:37:30 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"


uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main(void)
{
	uintptr_t	uintptr;
	
	Data *data = new Data();
	
	std::cout << "data: " << &data << std::endl;
	uintptr = serialize(data);
	std::cout << "uintptr: " << uintptr << std::endl;
	data = deserialize(uintptr);
	std::cout << "data: " << &data << std::endl;
}
