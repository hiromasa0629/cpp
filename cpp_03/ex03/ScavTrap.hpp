/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 00:00:29 by hyap              #+#    #+#             */
/*   Updated: 2022/08/24 15:51:18 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
	public:
		ScavTrap(void);
		~ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &a);
		ScavTrap	&operator=(const ScavTrap &rhs);

		void	guardGate(void) const;
		void	attack(const std::string &target);
		
	protected:
		const int	_HP;
		const int	_ENERGY;
		const int	_DMG;
};

#endif
