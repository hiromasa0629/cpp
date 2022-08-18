/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:42:42 by hyap              #+#    #+#             */
/*   Updated: 2022/08/18 23:58:04 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
# include <iostream>
# include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon &weapon);
		HumanB(void);
		~HumanB(void);

		void	attack(void) const;
		void	setWeapon(Weapon &weapon);
		Weapon	getWeapon(void) const;
	
	private:
		std::string _name;
		Weapon		*_weapon;
};

#endif
