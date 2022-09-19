/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:18:23 by hyap              #+#    #+#             */
/*   Updated: 2022/09/03 20:42:13 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H
# include <iostream>

class AAnimal {
	public:
		AAnimal(void);
		virtual ~AAnimal(void);
		AAnimal(const AAnimal &a);
		AAnimal	&operator=(const AAnimal &rhs);
		
		std::string	get_type(void) const;
		void		set_type(std::string type);
		
		virtual	void	makeSound(void) const = 0;
	
	protected:
		std::string	_type;
};

#endif
