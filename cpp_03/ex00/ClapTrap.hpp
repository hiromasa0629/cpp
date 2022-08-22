/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:34:48 by hyap              #+#    #+#             */
/*   Updated: 2022/08/22 17:47:05 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap {
	public:
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap(const ClapTrap &a);
		ClapTrap	&operator=(const ClapTrap &rhs);
		
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		
		std::string	get_name(void) const;
		int	get_hp(void) const;
		int	get_energy(void) const;
		int	get_dmg(void) const;
		
		void	set_hp(int hp);
		void	set_energy(int energy);
		void	set_dmg(int dmg);
		
		void	print_status(void) const;

	private:
		ClapTrap(void);
		
		std::string	_name;
		int			_hp;
		int			_energy;
		int			_dmg;
};
	
#endif
