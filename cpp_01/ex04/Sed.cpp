/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 00:12:12 by hyap              #+#    #+#             */
/*   Updated: 2022/08/19 01:35:25 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(void)
{

}

Sed::~Sed(void)
{
	std::cout << "Destructing Sed..." << std::endl;
	if (this->_filein.is_open())
	{
		this->_filein.close();
		std::cout << "Closed filein" << std::endl;
	}
	if (this->_fileout.is_open())
	{
		this->_fileout.close();
		std::cout << "Closed fileout" << std::endl;
	}
}

bool	Sed::setFilein(std::string path)
{
	this->_filein.open(path);
	if (!this->_filein.is_open())
	{
		std::cout << "Failed to open input file" << std::endl;
		return (false);
	}
	return (true);
}


bool	Sed::setFileout(std::string path)
{
	this->_fileout.open(path);
	if(!this->_fileout.is_open())
	{
		std::cout << "Failed to open output file" << std::endl;
		return (false);
	}
	return (true);
}

void	Sed::replaceString(char *s1, char *s2)
{
	std::string			tmp;
	std::stringstream	ss;

	std::getline(this->_filein, tmp);
	for (std::string::size_type i = 0; i < tmp.size(); i++)
	{
		if (std::strncmp(&tmp[i], s1, std::strlen(s1)) == 0)
		{
			ss << s2;
			i += std::strlen(s1) - 1;
		}
		else
			ss << tmp[i];
	}
	this->_fileout << ss.str() << std::endl;
}
