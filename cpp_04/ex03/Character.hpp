/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 22:06:52 by hyap              #+#    #+#             */
/*   Updated: 2022/09/04 16:38:08 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H
# include <iostream>
# include "ICharacter.hpp"

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define GREY "\x1B[30m"
# define WHITE "\x1B[37m"

class ICharacter;

class Character : public ICharacter {
	public:
		Character(void);
		~Character(void);
		Character(const Character &a);
		Character	&operator=(const Character &rhs);
		Character(const std::string name);
		
		const std::string	&get_name(void) const;
		void				set_name(const std::string name);
		
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
		
	private:
		std::string	_name;
		AMateria	*_inv[4];
		
		void	_nullify_inv(void);
};

std::ostream	&operator<<(std::ostream &o, const ICharacter &rhs);

#endif
