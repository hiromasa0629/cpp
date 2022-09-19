/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:05:15 by hyap              #+#    #+#             */
/*   Updated: 2022/09/03 19:47:21 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
# include <iostream>

class Brain {
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain &a);
		Brain	&operator=(const Brain &rhs);
		
	private:
		std::string	_ideas[100];
};

#endif
