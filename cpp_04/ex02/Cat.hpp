/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:47:48 by hyap              #+#    #+#             */
/*   Updated: 2022/09/03 20:45:29 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &a);
		Cat	&operator=(const Cat &rhs);
		
		void	makeSound(void) const;
		
		Brain	*get_brain(void) const;
		void	set_brain(Brain *brain);
		
	private:
		Brain	*_brain;
};

#endif
