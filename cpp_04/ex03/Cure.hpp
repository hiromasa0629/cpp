/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 21:53:00 by hyap              #+#    #+#             */
/*   Updated: 2022/09/04 15:31:32 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H
# include <iostream>
# include "AMateria.hpp"
# include "Character.hpp"

class Cure : public AMateria {
	public:
		Cure(void);
		~Cure(void);
		Cure(const Cure &a);
		Cure	&operator=(const Cure &rhs);
		
		AMateria	*clone(void) const;
		void	use(ICharacter &target);
};

std::ostream	&operator<<(std::ostream &o, const Cure &rhs);

#endif
