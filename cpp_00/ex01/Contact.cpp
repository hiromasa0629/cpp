/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 13:02:32 by hyap              #+#    #+#             */
/*   Updated: 2022/10/18 20:15:29 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string Contact::get_first_name(void) const
{
	return (this->_first_name);
}

std::string Contact::get_last_name(void) const
{
	return (this->_last_name);
}

std::string Contact::get_nickname(void) const
{
	return (this->_nickname);
}

std::string Contact::get_phone_number(void) const
{
	return (this->_phone_number);
}

std::string Contact::get_secret(void) const
{
	return (this->_secret);
}

int	Contact::get_index(void) const
{
	return (this->_index);
}

void	Contact::set_first_name(std::string s)
{
	this->_first_name = s;
}

void	Contact::set_last_name(std::string s)
{
	this->_last_name = s;
}

void	Contact::set_nickname(std::string s)
{
	this->_nickname = s;
}

void	Contact::set_phone_number(std::string s)
{
	this->_phone_number = s;
}

void	Contact::set_secret(std::string s)
{
	this->_secret = s;
}

void	Contact::set_index(int i)
{
	this->_index = i;
}

bool	Contact::set_contact(int index, std::fstream &fs)
{
	std::string	tmp_info[5];
	std::string fields[5] = {
		"First Name",
		"Last Name",
		"Nickname",
		"Phone Number",
		"Darkest Secret"
	};

	for (int i = 0; i < 5; i++)
	{
		std::cout << fields[i] << ": ";
		if (fs)
		{
			std::getline(fs, tmp_info[i]);
			std::cout << tmp_info[i] << std::endl;
		}
		else
			std::getline(std::cin, tmp_info[i]);
		if (tmp_info[i].length() < 1)
		{
			std::cout << "Field cannot be empty!" << std::endl;
			return (false);
		}
	}
	this->set_index(index);
	this->set_first_name(tmp_info[0]);
	this->set_last_name(tmp_info[1]);
	this->set_nickname(tmp_info[2]);
	this->set_phone_number(tmp_info[3]);
	this->set_secret(tmp_info[4]);
	return (true);
}

void	Contact::show_contact(void) const
{
	std::string cols[4] = {
		std::to_string(this->get_index()),
		this->get_first_name(),
		this->get_last_name(),
		this->get_nickname()
	};

	for (size_t i = 0; i < sizeof(cols) / sizeof(*cols); i++)
	{
		if (cols[i].length() > 10)
		{
			for (size_t j = 0; j < 9; j++)
				std::cout << cols[i][j] << std::ends;
			std::cout << "." << std::ends;
		}
		else
		{
			for (size_t j = 0; j < 10 - cols[i].length(); j++)
				std::cout << " " << std::ends;
			std::cout << cols[i] << std::ends;
		}
		if (i != (sizeof(cols) / sizeof(*cols)) - 1)
			std::cout << "|" << std::ends;
	}
	std::cout << "\n" << std::ends;
}
