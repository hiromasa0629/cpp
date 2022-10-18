/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:57:33 by hyap              #+#    #+#             */
/*   Updated: 2022/10/18 20:10:05 by hyap             ###   ########.fr       */
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

bool	PhoneBook::add_contact(int index, std::fstream &fs)
{
	bool	tmp;

	tmp = this->contacts[index].set_contact(index, fs);
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
	if (index > (this->count - 1))
	{
		std::cout << "Out of Index !" << std::endl;
		return ;
	}
	std::cout << "First Name: " << this->contacts[index].get_first_name() << std::endl;
	std::cout << "Last Name: " << this->contacts[index].get_last_name() << std::endl;
	std::cout << "Nickname: "	 << this->contacts[index].get_nickname() << std::endl;
	std::cout << "Phone Number: " << this->contacts[index].get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << this->contacts[index].get_secret() << std::endl;
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
