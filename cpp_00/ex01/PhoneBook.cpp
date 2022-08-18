/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:57:33 by hyap              #+#    #+#             */
/*   Updated: 2022/08/17 01:03:54 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	PhoneBook::count = 0;

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

bool	PhoneBook::add_contact(int index)
{
	bool	tmp;

	tmp = this->contacts[index].set_contact(index);
	if (tmp)
	{
		this->count++;
		std::cout << "===================" << std::endl;
		std::cout << "# Contact Added ! #" << std::endl;
		std::cout << "===================" << std::endl;
	}
	return (tmp);
}

void	PhoneBook::search_contact(int index) const
{
	this->contacts[index].show_contact();
}

void	PhoneBook::show_all_contacts(void) const
{
	int	max;

	max = this->count;
	if (max > 8)
		max = 8;
	for (int i = 0; i < max; i++)
		this->contacts[i].show_contact();
}
