/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:23:54 by hyap              #+#    #+#             */
/*   Updated: 2022/09/01 16:00:23 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &a);
		Dog	&operator=(const Dog &rhs);
		
		void	makeSound(void) const;
};

#endif
