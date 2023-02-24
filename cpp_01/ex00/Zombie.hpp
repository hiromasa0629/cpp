/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 01:32:40 by hyap              #+#    #+#             */
/*   Updated: 2023/01/16 20:12:43 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie {
	public:
		Zombie(std::string name);
		Zombie(const Zombie &src);
		Zombie	&operator=(const Zombie &rhs);
		~Zombie(void);

		void	announce(void);
	
	private:
		std::string _name;

		Zombie(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
