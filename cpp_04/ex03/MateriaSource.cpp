/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:55:48 by hyap              #+#    #+#             */
/*   Updated: 2022/09/04 16:55:01 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/***********************************
 * Constructor
***********************************/

MateriaSource::MateriaSource(void)
{
	this->_nullify_materia();
	std::cout << "[MateriaSource] Constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &a)
{
	this->_nullify_materia();
	*this = a;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (!this->_materia[i])
			continue ;
		this->_materia[i] = rhs._materia[i]->clone();
	}
	return (*this);
}

/***********************************
 * Functions
***********************************/

void	MateriaSource::learnMateria(AMateria *materia)
{
	size_t	i = 0;
	
	while (this->_materia[i])
		i++;
	if (i > 4)
	{
		std::cout << RED << "Materia knowledge is full !" << WHITE << std::endl;
		return ;
	}
	this->_materia[i] = materia->clone();
	delete materia;
	std::cout << YELLOW << "Successfully learn materia[" << i << "] " << *materia << WHITE << std::endl;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (!this->_materia[i])
			continue ;
		if (this->_materia[i]->get_type() == type)
		{
			std::cout << YELLOW << "Successfully created materia " << type << WHITE << std::endl;
			return (this->_materia[i]->clone());
		}
	}
	std::cout << RED << "Unknown materia type..." << WHITE << std::endl;
	return (NULL);
}

void	MateriaSource::_nullify_materia(void)
{
	for (size_t i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

/***********************************
 * Destructor
***********************************/

MateriaSource::~MateriaSource(void)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (!this->_materia[i])
			continue ;
		delete this->_materia[i];
	}
	std::cout << "[MateriaSource] Destructing..." << std::endl;
}
