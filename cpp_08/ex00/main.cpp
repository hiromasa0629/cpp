/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:28:00 by hyap              #+#    #+#             */
/*   Updated: 2022/10/18 11:58:54 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "easyfind.tpp"

int	main(void)
{
	std::cout << RED << "====== Int Vector ======" << WHITE << std::endl;
	try
	{
		std::vector<int> ivec;
		for (int i = 0; i < 10; i++)
			ivec.push_back(i);
		easyfind(ivec, 5);
		easyfind(ivec, 42);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << RED << "====== Char Vector ======" << WHITE << std::endl;
	try
	{
		std::vector<char> cvec;
		cvec.push_back('a');
		cvec.push_back('b');
		cvec.push_back('c');
		easyfind(cvec, 'b');
		easyfind(cvec, 'z');
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	std::cout << RED << "====== Char List ======" << WHITE << std::endl;
	try
	{
		std::list<char> clist;
		clist.push_back('a');
		clist.push_back('b');
		clist.push_back('c');
		easyfind(clist, 'c');
		easyfind(clist, 'a');
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

}
