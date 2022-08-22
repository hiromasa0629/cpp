/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:34:48 by hyap              #+#    #+#             */
/*   Updated: 2022/08/23 00:25:47 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define GREY "\x1B[30m"
# define WHITE "\x1B[37m"

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

	protected:
		ClapTrap(void);

		std::string	_name;
		int			_hp;
		int			_energy;
		int			_dmg;
};

#endif
