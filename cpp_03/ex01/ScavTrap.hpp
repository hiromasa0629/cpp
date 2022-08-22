/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 00:00:29 by hyap              #+#    #+#             */
/*   Updated: 2022/08/23 00:47:01 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(void);
		~ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &a);
		ScavTrap	&operator=(const ScavTrap &rhs);

		void	attack(const std::string &target);

		void	print_status(void) const;

};

#endif
