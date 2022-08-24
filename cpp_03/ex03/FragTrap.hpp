/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:29:31 by hyap              #+#    #+#             */
/*   Updated: 2022/08/24 15:43:04 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(const FragTrap &a);
		FragTrap	&operator=(const FragTrap &rhs);
		
		void	highFivesGuys(void) const;
	
	protected:
		const int	_HP;
		const int	_ENERGY;
		const int	_DMG;
};

#endif
