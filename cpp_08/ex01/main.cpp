/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:00:17 by hyap              #+#    #+#             */
/*   Updated: 2022/10/18 16:44:05 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{

	std::cout << RED << "====== Size of 5 (overflow) ======" << WHITE << std::endl;
	Span	span5(5);
	int		nums[] = {10, 20, 1, 3, 250};

	try
	{
		for (size_t i = 0; i < 5; i++)
			span5.addNumber(nums[i]);
		span5.addNumber(1);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	std::cout << RED << "====== Size of 5 (queries) ======" << WHITE << std::endl;
	std::cout << span5 << std::endl;
	try
	{
		std::cout << "Shortest Span: " << span5.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << span5.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	std::cout << RED << "====== 1/0 Stored value Exception ======" << WHITE << std::endl;
	int	bad[] = {1};
	Span	badspan(5);
	Span 	badspan2(0);

	try
	{
		for (size_t i = 0; i < 1; i++)
			badspan.addNumber(bad[i]);
		std::cout << badspan << std::endl;
		std::cout << "Shortest Span: " << badspan.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << badspan.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << badspan2 << std::endl;
		std::cout << "Shortest Span: " << badspan2.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << badspan2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	std::cout << RED << "====== 10k size ======" << WHITE << std::endl;
	Span	span10k(10000);

	try
	{
		span10k.fillSpan();
		std::cout << "Shortest Span: " << span10k.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << span10k.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	std::cout << RED << "====== Exercise ======" << WHITE << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl;

	return (0);
}
