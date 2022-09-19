/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:56:37 by hyap              #+#    #+#             */
/*   Updated: 2022/09/04 16:34:50 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H
# include <iostream>
# include "Character.hpp"

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define GREY "\x1B[30m"
# define WHITE "\x1B[37m"

class ICharacter;

class AMateria {
	public:
		AMateria(void);
		AMateria(const std::string &type);
		virtual ~AMateria(void);
		AMateria(const AMateria &a);
		AMateria	&operator=(const AMateria &rhs);
		
		const std::string	&get_type(void) const;
		void				set_type(const std::string type);
		
		virtual AMateria	*clone(void) const = 0;
		virtual void use(ICharacter &target);
	
	protected:
		std::string	_type;
		
};

std::ostream	&operator<<(std::ostream &o, const AMateria &rhs);

#endif
