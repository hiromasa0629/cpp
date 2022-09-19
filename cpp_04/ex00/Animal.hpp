/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:18:23 by hyap              #+#    #+#             */
/*   Updated: 2022/09/01 16:45:12 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>

class Animal {
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(const Animal &a);
		Animal	&operator=(const Animal &rhs);
		
		std::string	get_type(void) const;
		void		set_type(std::string type);
		
		virtual	void	makeSound(void) const;
	
	protected:
		std::string	_type;
};

#endif
