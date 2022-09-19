/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:10:49 by hyap              #+#    #+#             */
/*   Updated: 2022/09/05 13:31:05 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void	run(void)
{
	std::cout << "========== Subject Test ==========" << std::endl;
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
}

void	run2(void)
{
	std::cout << "========== My Test ==========" << std::endl;
	
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter	*me = new Character("me");
	
	std::cout << "   --- create materia ---   " << std::endl;
	AMateria	*materia;
	materia = src->createMateria("incorrect_materia");
	me->equip(materia);
	materia = src->createMateria("ice");
	me->equip(materia);
	
	std::cout << "   --- unequip ---   " << std::endl;
	me->unequip(0);
	me->unequip(1); // Null inventory
	
	std::cout << "   --- equip ---   " << std::endl;
	me->equip(materia);
	me->equip(materia);
	me->equip(materia);
	me->equip(materia);
	me->equip(materia); // Inventory overflow
	
	std::cout << "   --- use test ---   " << std::endl;
	ICharacter	*bob = new Character("bob");
	me->use(0, *bob);
	me->use(50, *bob); // Invalid slot number
	me->use(2, *bob);
	
	delete bob;
	delete me;
	delete src;
}

int main(void)
{
	run();
	run2();
	system("leaks main");
	return 0;
}
