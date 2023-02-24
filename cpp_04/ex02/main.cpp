/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:18:09 by hyap              #+#    #+#             */
/*   Updated: 2023/02/01 18:31:55 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	run(void)
{	
	std::cout << "========== Subject Test ==========" << std::endl;
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	// const AAnimal* ani = new AAnimal();

	delete j;
	delete i;
}

int main(void)
{
	run();
	system("leaks main");
	return 0;
}
