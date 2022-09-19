/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:23:54 by hyap              #+#    #+#             */
/*   Updated: 2022/09/03 20:45:36 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &a);
		Dog	&operator=(const Dog &rhs);
		
		void	makeSound(void) const;
		
		Brain	*get_brain(void) const;
		void	set_brain(Brain *brain);
	private:
		Brain	*_brain;
};

#endif
