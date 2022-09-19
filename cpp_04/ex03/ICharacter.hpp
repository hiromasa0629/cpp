/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 22:01:34 by hyap              #+#    #+#             */
/*   Updated: 2022/09/04 16:23:30 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHRACTER_H
# define ICHRACTER_H 
# include <iostream>
# include "AMateria.hpp"

class AMateria;

class ICharacter {
	public:
		virtual	~ICharacter() {};
		virtual const std::string	&get_name(void) const = 0;
		virtual void				equip(AMateria *m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter &target) = 0;
};


#endif
