/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:12:53 by hyap              #+#    #+#             */
/*   Updated: 2022/08/17 01:02:02 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	run_cmds(std::string s)
{
	static int			index = 0;
	static PhoneBook	pb;
	std::string			tmp;

	if (s == "ADD")
	{
		std::cout << std::to_string(index) << std::endl;
		if (!pb.add_contact(index))
			return ;
		index++;
		if (index > 7)
			index = 0;
	}
	else if (s == "SEARCH")
	{
		pb.show_all_contacts();
		std::cout << "Enter a contact index: " << std::ends;
		std::getline(std::cin, tmp);
		if (tmp.length() > 1)
			std::cout << "Index too large!" << std::endl;
		else if (std::isdigit(tmp[0]))
			pb.search_contact(tmp[0] - '0');
	}
	else if (s == "EXIT")
		std::exit(1);
}

int	main(void)
{
	std::string s;

	std::cout << "ADD: Add a contact" << std::endl;
	std::cout << "SEARCH: Display all contacts and show specific contact" << std::endl;
	std::cout << "EXIT: Exit the phonebook and all contacts will be erased" << std::endl;
	std::cout << "========================================================" << std::endl;

	while (1)
	{
		std::cout << "Command: " << std::ends;
		std::getline(std::cin, s);
		if (s.empty())
			return (0);
		run_cmds(s);
	}
}
