/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:52:48 by hyap              #+#    #+#             */
/*   Updated: 2022/09/04 16:38:21 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H
# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define GREY "\x1B[30m"
# define WHITE "\x1B[37m"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(const MateriaSource &a);
		MateriaSource	&operator=(const MateriaSource &rhs);
		
		void	learnMateria(AMateria *materia);
		AMateria	*createMateria(const std::string &type);
	
	private:
		AMateria	*_materia[4];
		
		void	_nullify_materia(void);
};

#endif
