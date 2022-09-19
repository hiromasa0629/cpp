/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:18:09 by hyap              #+#    #+#             */
/*   Updated: 2022/09/03 20:18:28 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	run(void)
{
	std::cout << "========== Array Test ==========" << std::endl;
	Animal *animals[6];
	
	for (size_t n = 0; n < 3; n++)
		animals[n] = new Dog();
	for (size_t n = 3; n < 6; n++)
		animals[n] = new Cat();
	
	for (size_t n = 0; n < 6; n++)
		delete animals[n];
	std::cout << std::endl;
	
	std::cout << "========== Deep Copy ==========" << std::endl;
	Animal *ani = new Dog();
	Animal ani2(*ani);
	
	delete ani;
	std::cout << std::endl;
	
	std::cout << "========== Subject Test ==========" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;
}

int main(void)
{
	run();
	system("leaks main");
	return 0;
}
