/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:27:56 by hyap              #+#    #+#             */
/*   Updated: 2022/09/01 16:38:52 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(const WrongCat	&a);
		WrongCat	&operator=(const WrongCat &rhs);
		
		void	makeSound(void) const;
};

#endif
