/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:50:10 by hyap              #+#    #+#             */
/*   Updated: 2022/10/13 22:10:21 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int i;
	srand(time(NULL));
	
	i = rand() % 3;
	switch (i)
	{
		case 1:
			std::cout << "Created A" << std::endl;
			return (new A());
		case 2:
			std::cout << "Created B" << std::endl;
			return (new B());
		default:
			std::cout << "Created C" << std::endl;
			return (new C());
	}
	return (NULL);
}

void	identify(Base *p)
{
	A	*aptr;
	B	*bptr;
	C	*cptr;
	
	aptr = dynamic_cast<A*>(p);
	bptr = dynamic_cast<B*>(p);
	cptr = dynamic_cast<C*>(p);
	
	if (aptr)
		std::cout << "A" << std::endl;
	else if (bptr)
		std::cout << "B" << std::endl;
	else if (cptr)
		std::cout << "C" << std::endl;
	else
		std::cout << "None" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A	&aref = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)aref;
		return ;
	}
	catch (const std::exception &e) {}
	
	try
	{
		B	&bref = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)bref;
		return ;
	}
	catch (const std::exception &e) {}
	
	try
	{
		C	&cref = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)cref;
		return ;
	}
	catch (const std::exception &e) {}
	
	return ;
}

int	main(void)
{
	Base	*base;
	
	base = generate();
	
	identify(base);
	identify(*base);
	
	delete base;
	
}
