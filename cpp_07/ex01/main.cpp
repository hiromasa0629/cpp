/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:04:37 by hyap              #+#    #+#             */
/*   Updated: 2022/10/14 15:21:49 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	std::cout << RED << "====== int array ======"  << WHITE << std::endl;
	int	nums[5] = {1, 2, 3, 4, 5};	
	::iter(nums, 5, ::print);
	std::cout << std::endl;
	
	std::cout << RED << "====== string array ======" << WHITE << std::endl;
	std::string	str[] = {"line 1", "line 2", "line 3", "line 4", "line 5"};
	::iter(str, 5, ::print);
	std::cout << std::endl;
	
	std::cout << RED << "====== class array ======" << WHITE << std::endl;
	HelloWorld	hw[5] = {1, 2, 3, 4, 5};
	::iter(hw, 5, ::print);
	std::cout << std::endl;

	return (0);
}
