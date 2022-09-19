/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:13:09 by hyap              #+#    #+#             */
/*   Updated: 2022/09/01 16:46:32 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H
# include <iostream>

class WrongAnimal {
	public:
		WrongAnimal(void);
		virtual ~WrongAnimal(void);
		WrongAnimal(const WrongAnimal &a);
		WrongAnimal	&operator=(const WrongAnimal &rhs);
		
		std::string	get_type(void) const;
		void	set_type(std::string type);
	
		void	makeSound(void) const;
		
	protected:
		std::string	_type;
};

#endif
