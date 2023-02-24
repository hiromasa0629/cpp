/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:18:09 by hyap              #+#    #+#             */
/*   Updated: 2023/02/01 18:27:17 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->get_type() << " " << std::endl;
	std::cout << i->get_type() << " " << std::endl;
	std::cout << "Dog: ";
	i->makeSound(); //will output the cat sound!
	std::cout << "Cat: ";
	j->makeSound();
	std::cout << "Animal: ";
	meta->makeSound();
	
	delete(meta);
	delete(j);
	delete(i);
	
	const WrongAnimal* wa = new WrongCat();
	
	std::cout << wa->get_type() << " " << std::endl;
	wa->makeSound();
	
	delete(wa);

	return 0;
}
