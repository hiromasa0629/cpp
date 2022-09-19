/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 21:41:50 by hyap              #+#    #+#             */
/*   Updated: 2022/09/04 15:30:56 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H
# include <iostream>
# include "AMateria.hpp"
# include "Character.hpp"

class Ice : public AMateria {
	public:
		Ice(void);
		~Ice(void);
		Ice(const Ice &a);
		Ice	&operator=(const Ice &rhs);
		
		AMateria	*clone(void) const;
		void		use(ICharacter &target);
		
};

std::ostream	&operator<<(std::ostream &o, const Ice &rhs);

#endif
