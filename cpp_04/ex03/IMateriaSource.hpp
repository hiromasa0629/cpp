/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:49:51 by hyap              #+#    #+#             */
/*   Updated: 2022/09/04 15:55:34 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H 
# include <iostream>
# include "AMateria.hpp"

class IMateriaSource {
	public:
		virtual	~IMateriaSource(void) {};
		virtual void	learnMateria(AMateria *materia) = 0;
		virtual AMateria	*createMateria(const std::string &type) = 0;
};

#endif
