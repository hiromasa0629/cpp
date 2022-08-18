/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyap <hyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:39:06 by hyap              #+#    #+#             */
/*   Updated: 2022/08/19 00:07:54 by hyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include <iostream>
# include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon &weapon);
		HumanA(void);
		~HumanA(void);

		void	attack(void) const;
		void	setWeapon(Weapon &weapon);
		Weapon	getWeapon(void) const;

	private:
		std::string	_name;
		/* 
		Declare a pointer pointing to Weapon because it needs to point to a reference
		of a weapon so it will be flexible.
		*/
		Weapon		*_weapon;
};

#endif
