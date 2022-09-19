/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:47:48 by hyap              #+#    #+#             */
/*   Updated: 2022/09/03 19:34:42 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &a);
		Cat	&operator=(const Cat &rhs);
		
		void	makeSound(void) const;
};

#endif
